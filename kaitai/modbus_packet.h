#ifndef MODBUS_PACKET_H_
#define MODBUS_PACKET_H_

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif

class modbus_packet_t : public kaitai::kstruct {

public:
    class data_t;
    class data_multiple_t;

    modbus_packet_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, modbus_packet_t* p__root = 0);

private:
    void _read();
    void _clean_up();

public:
    ~modbus_packet_t();

    class data_t : public kaitai::kstruct {

    public:

        data_t(kaitai::kstream* p__io, modbus_packet_t* p__parent = 0, modbus_packet_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~data_t();

    private:
        uint16_t m_address;
        uint16_t m_count;
        modbus_packet_t* m__root;
        modbus_packet_t* m__parent;

    public:
        uint16_t address() const { return m_address; }
        uint16_t count() const { return m_count; }
        modbus_packet_t* _root() const { return m__root; }
        modbus_packet_t* _parent() const { return m__parent; }
    };

    class data_multiple_t : public kaitai::kstruct {

    public:

        data_multiple_t(kaitai::kstream* p__io, modbus_packet_t* p__parent = 0, modbus_packet_t* p__root = 0);

    private:
        void _read();
        void _clean_up();

    public:
        ~data_multiple_t();

    private:
        uint16_t m_address;
        uint16_t m_register_count;
        uint16_t m_byte_count;
        std::string m_register_values;
        modbus_packet_t* m__root;
        modbus_packet_t* m__parent;

    public:
        uint16_t address() const { return m_address; }
        uint16_t register_count() const { return m_register_count; }
        uint16_t byte_count() const { return m_byte_count; }
        std::string register_values() const { return m_register_values; }
        modbus_packet_t* _root() const { return m__root; }
        modbus_packet_t* _parent() const { return m__parent; }
    };

private:
    uint16_t m_transaction_id;
    uint16_t m_protocol_id;
    uint16_t m_length;
    int8_t m_unit_id;
    int8_t m_action_code;
    kaitai::kstruct* m_pdu;
    bool n_pdu;

public:
    bool _is_null_pdu() { pdu(); return n_pdu; };

private:
    modbus_packet_t* m__root;
    kaitai::kstruct* m__parent;
    std::string m__raw_pdu;
    kaitai::kstream* m__io__raw_pdu;

public:
    uint16_t transaction_id() const { return m_transaction_id; }
    uint16_t protocol_id() const { return m_protocol_id; }
    uint16_t length() const { return m_length; }
    int8_t unit_id() const { return m_unit_id; }
    int8_t action_code() const { return m_action_code; }
    kaitai::kstruct* pdu() const { return m_pdu; }
    modbus_packet_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
    std::string _raw_pdu() const { return m__raw_pdu; }
    kaitai::kstream* _io__raw_pdu() const { return m__io__raw_pdu; }
};

#endif  // MODBUS_PACKET_H_
