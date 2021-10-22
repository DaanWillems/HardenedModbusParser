meta:
  id: modbus_packet
  endian: be
seq:
  - id: action_code
    type: s1
  - id: pdu
    type:
      switch-on: action_code
      cases:
        1: data
        2: data_multiple
types:
  data:
    seq:
      - id: a1
        type: u2
  data_multiple:
    seq:
      - id: b1
        type: u2
      - id: b2
        type: u2
