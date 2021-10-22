// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "modbus_packet.h"

modbus_packet_t::modbus_packet_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, modbus_packet_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void modbus_packet_t::_read() {
    m_action_code = m__io->read_s1();
    n_pdu = true;
    switch (action_code()) {
    case 1: {
        n_pdu = false;
        m_pdu = new data_t(m__io, this, m__root);
        break;
    }
    case 2: {
        n_pdu = false;
        m_pdu = new data_multiple_t(m__io, this, m__root);
        break;
    }
    }
}

modbus_packet_t::~modbus_packet_t() {
    _clean_up();
}

void modbus_packet_t::_clean_up() {
    if (!n_pdu) {
        fprintf(stderr, "Before check: %p\n", &m_pdu);
        if (m_pdu) {
            fprintf(stderr, "After check: %p\n", &m_pdu);
            delete m_pdu; m_pdu = 0;
        }
    }
}

modbus_packet_t::data_t::data_t(kaitai::kstream* p__io, modbus_packet_t* p__parent, modbus_packet_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void modbus_packet_t::data_t::_read() {
    m_a1 = m__io->read_u2be();
}

modbus_packet_t::data_t::~data_t() {
    _clean_up();
}

void modbus_packet_t::data_t::_clean_up() {
}

modbus_packet_t::data_multiple_t::data_multiple_t(kaitai::kstream* p__io, modbus_packet_t* p__parent, modbus_packet_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void modbus_packet_t::data_multiple_t::_read() {
    m_b1 = m__io->read_u2be();
    m_b2 = m__io->read_u2be();
}

modbus_packet_t::data_multiple_t::~data_multiple_t() {
    _clean_up();
}

void modbus_packet_t::data_multiple_t::_clean_up() {
}
