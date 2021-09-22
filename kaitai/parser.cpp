#include <fstream>
#include <iostream>
#include <kaitai/kaitaistream.h>
#include "modbus_packet.h"

int main () { 
    
    std::ifstream is("./input2", std::ifstream::binary);
    kaitai::kstream ks(&is);
    modbus_packet_t data(&ks);
    std::cout << data.action_code();
    return 0;
}

