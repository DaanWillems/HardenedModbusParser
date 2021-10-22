meta:
  id: modbus_packet
  endian: be
  ks-opaque-types: true
seq:
  - id: transaction_id
    type: u2
  - id: protocol_id
    type: u2
  - id: length
    type: u2
  - id: unit_id
    type: s1
  - id: action_code
    type: s1
    contents: []
  - id: pdu
    size: length-2
    type:
      switch-on: action_code
      cases:
        1: data_rc
        2: data_rdi
        3: data_rhr
        4: data_rir
        5: data_wsc
        6: data_wshr
        15: data_wmc
        16: data_wmhr
types:
  data_rc:
    seq:
      - id: address
        type: u2
      - id: count
        type: u2_max_2000
  data_rdi:
    seq:
      - id: address
        type: u2
      - id: count
        type: u2_max_2000
  data_rhr:
    seq:
      - id: address
        type: u2
      - id: count
        type: u2_max_125
  data_rir:
    seq:
      - id: address
        type: u2
      - id: count
        type: u2_max_125
  data_wsc:
    seq:
      - id: address
        type: u2
      - id: count
        type: u2_max_65280
  data_wshr:
    seq:
      - id: address
        type: u2
      - id: count
        type: u2
  data_wmhr:
    seq:
      - id: address
        type: u2
      - id: register_count
        type: u2
      - id: byte_count
        type: u1
      - id: register_values
        size: register_count*2
  data_wmc:
    seq:
      - id: address
        type: u2
      - id: register_count
        type: u2
      - id: byte_count
        type: u1
      - id: register_values
        size: register_count*2
