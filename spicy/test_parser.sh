#!/bin/bash
# echo -e -n '\x01\x01\x02' > output.fuzz
# echo -e -n '\x00\x05\x00\x00\x00\x06\x02\x01\x00\x20\x00' | spicy-driver modbusv3.spicy
# echo -e -n '\x01\x00\x20\x00\x0c' | spicy-driver modbusv2.spicy

# echo -e -n '\x00\x23\x00\x00\x00\x0B\x1C\x10\x00\x64\x00\x02\x04\x03\xE8\x07\xD8' | spicy-driver modbusv3.spicy


echo -e -n '\x02\x01\x00\x20\x00\x0C\x3D\xF6' | spicy-driver modbusv3.spicy
