meta:
  id: modbus_packet
  endian: be
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
  - id: pdu
    size: length-2
    type:
      switch-on: action_code
      cases:
        1: data
        2: data
        3: data
        4: data
        5: data
        6: data
        15: data_multiple
        16: data_multiple
types:
  data:
    seq:
      - id: address
        type: u2
      - id: count
        type: u2
  data_multiple:
    seq:
      - id: address
        type: u2
      - id: register_count
        type: u2
      - id: byte_count
        type: u2
      - id: register_values
        size: register_count*2
