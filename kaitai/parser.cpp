#include <fstream>
#include <iostream>
#include <kaitai/kaitaistream.h>
#include "modbus_packet.h"
#include <cxxabi.h>

const char* currentExceptionTypeName()
{
    int status;
    return abi::__cxa_demangle(abi::__cxa_current_exception_type()->name(), 0, 0, &status);
}


int main (int argc, char *argv[]) { 
    try {
        std::ifstream is(argv[1], std::ifstream::binary);
        kaitai::kstream ks(&is);

        modbus_packet_t data(&ks);
        std::cout << data.transaction_id() << std::endl;
        std::cout << data.protocol_id() << std::endl;
        std::cout << data.length() << std::endl;
        std::cout << unsigned(data.unit_id()) << std::endl;
        std::cout << unsigned(data.action_code()) << std::endl;

        modbus_packet_t::data_t pdu = dynamic_cast<modbus_packet_t::data_t&>(*data.pdu());

        std::cout << pdu.address() << std::endl;
    } catch(std::__ios_failure e) {
        std::cout<<"Type of caught exception is "<<currentExceptionTypeName()<<std::endl;
        // std::cout << "Message: " << e.what() << "\n";
        // std::cout << "Type:    " << typeid(e).name() << "\n";
    }

    return 0;
}

