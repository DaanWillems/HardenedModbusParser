#include <hammer/hammer.h>
#include <hammer/glue.h>
#include <stdio.h>
#include <inttypes.h>

int main(int argc, char *argv[]) {
    uint8_t input[1024];
    size_t inputsize;

    HParser *pdu_single_parser = h_sequence(h_uint16(), h_uint16(), h_end_p(), NULL);
    HParser *pdu_many_parser = h_sequence(h_uint16(), h_uint16(), h_uint8(), h_many(h_uint8()), h_end_p(), NULL);
    HParser *header_parser = h_sequence(h_uint16(), //trans id
                                      h_uint16(), //protocol id
                                      h_uint16(), // length
                                      h_uint8(), // unitaddress
                                      h_uint8(),  // functioncode
                                      NULL);

    HParser *full_parser = h_sequence(header_parser, h_choice(pdu_many_parser, pdu_single_parser, NULL), NULL);

    inputsize = fread(input, 1, sizeof(input), stdin);

    HParseResult *parse_result = h_parse(full_parser, input, inputsize);
    if(parse_result == NULL) {
        printf("Parsing failed \n");
        return 1;
    } else {
        if(TT_SEQUENCE != parse_result->ast->token_type)
            return false;
        
        HParsedToken **fields = h_seq_elements(parse_result->ast);
        HParsedToken **header_fields = h_seq_elements(fields[0]);
        HParsedToken **pdu_fields = h_seq_elements(fields[1]);

        uint64_t function_code = header_fields[4]->uint;
        uint64_t pdu_length = fields[1]->seq->used;
        uint64_t length_field = header_fields[2]->uint;

        if(function_code > 0 && function_code < 7) {
            if(pdu_length != 2) {
                printf("Incorrect PDU size\n");
                return 1;
            }
            
            if(length_field != 6) {
                printf("Length field must be 6\n");
                return 1;
            }

            if(length_field+6 != inputsize) {
                printf("Packet size does not match length field\n");
                return 1;
            }

            uint64_t aaddress_field = pdu_fields[0]->uint;
            uint64_t count_field = pdu_fields[1]->uint;

            if(function_code == 1 || function_code == 2) {
                if(count_field > 2000) {
                    printf("Count field exceeded 2000\n");
                    return 1;
                }
            }

            if(function_code == 3 || function_code == 4) {
                if(count_field > 125) {
                    printf("Count field exceeded 125\n");
                    return 1;
                }
            }

            if(function_code == 5) {
                if(count_field > 65280) {
                    printf("Count field exceeded 65280\n");
                    return 1;
                }
            }

        } else if(function_code == 15 || function_code == 16) {
            if(pdu_length < 4) {
                printf("Incorrect PDU size\n");
                return 1;
            }

            if(length_field+6 != inputsize) {
                printf("Packet size does not match length field\n");
                return 1;
            }


            uint64_t count_field = pdu_fields[1]->uint;
            uint64_t size_field = pdu_fields[2]->uint;

            if(size_field != pdu_fields[3]->seq->used) {
                printf("Size field does not match PDU size\n");
                return 1;
            }

            if(function_code == 15 && pdu_fields[3]->seq->used != count_field) {
                printf("Count field does not match coil count\n");
                return 1;
            }

            if(function_code == 16 && pdu_fields[3]->seq->used/2 != count_field) {
                printf("Count field does not match register count\n");
                return 1;
            }

        } else {
            printf("Function code invalid\n");
            return 1;
        }
        

        printf("Transaction ID has value %lu \n", header_fields[0]->uint);
        printf("Protocol ID has value %lu \n", header_fields[1]->uint);
        printf("Length has value %lu \n", header_fields[2]->uint);
        printf("Unit address has value %lu \n", header_fields[3]->uint);
        printf("Functioncode has value %lu \n", header_fields[4]->uint);


        // printf("Bit length of PDU %lu \n", fields[0]->seq->bytes);

        // if(fields[1]->bit_length >)
    }
}