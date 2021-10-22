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
        uint16_t m_a1;
        modbus_packet_t* m__root;
        modbus_packet_t* m__parent;

    public:
        uint16_t a1() const { return m_a1; }
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
        uint16_t m_b1;
        uint16_t m_b2;
        modbus_packet_t* m__root;
        modbus_packet_t* m__parent;

    public:
        uint16_t b1() const { return m_b1; }
        uint16_t b2() const { return m_b2; }
        modbus_packet_t* _root() const { return m__root; }
        modbus_packet_t* _parent() const { return m__parent; }
    };

private:
    int8_t m_action_code;
    kaitai::kstruct* m_pdu = 0;
    bool n_pdu;

public:
    bool _is_null_pdu() { pdu(); return n_pdu; };

private:
    modbus_packet_t* m__root;
    kaitai::kstruct* m__parent;

public:
    int8_t action_code() const { return m_action_code; }
    kaitai::kstruct* pdu() const { return m_pdu; }
    modbus_packet_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};

#endif  // MODBUS_PACKET_H_
