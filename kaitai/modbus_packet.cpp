// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "modbus_packet.h"

modbus_packet_t::modbus_packet_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, modbus_packet_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m__io__raw_pdu = 0;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void modbus_packet_t::_read() {
    m_transaction_id = m__io->read_u2be();
    m_protocol_id = m__io->read_u2be();
    m_length = m__io->read_u2be();
    m_unit_id = m__io->read_s1();
    m_action_code = m__io->read_s1();
    n_pdu = true;
    switch (action_code()) {
    case 4: {
        n_pdu = false;
        m__raw_pdu = m__io->read_bytes((length() - 2));
        m__io__raw_pdu = new kaitai::kstream(m__raw_pdu);
        m_pdu = new data_rir_t(m__io__raw_pdu, this, m__root);
        break;
    }
    case 6: {
        n_pdu = false;
        m__raw_pdu = m__io->read_bytes((length() - 2));
        m__io__raw_pdu = new kaitai::kstream(m__raw_pdu);
        m_pdu = new data_wshr_t(m__io__raw_pdu, this, m__root);
        break;
    }
    case 1: {
        n_pdu = false;
        m__raw_pdu = m__io->read_bytes((length() - 2));
        m__io__raw_pdu = new kaitai::kstream(m__raw_pdu);
        m_pdu = new data_rc_t(m__io__raw_pdu, this, m__root);
        break;
    }
    case 3: {
        n_pdu = false;
        m__raw_pdu = m__io->read_bytes((length() - 2));
        m__io__raw_pdu = new kaitai::kstream(m__raw_pdu);
        m_pdu = new data_rhr_t(m__io__raw_pdu, this, m__root);
        break;
    }
    case 5: {
        n_pdu = false;
        m__raw_pdu = m__io->read_bytes((length() - 2));
        m__io__raw_pdu = new kaitai::kstream(m__raw_pdu);
        m_pdu = new data_wsc_t(m__io__raw_pdu, this, m__root);
        break;
    }
    case 15: {
        n_pdu = false;
        m__raw_pdu = m__io->read_bytes((length() - 2));
        m__io__raw_pdu = new kaitai::kstream(m__raw_pdu);
        m_pdu = new data_wmc_t(m__io__raw_pdu, this, m__root);
        break;
    }
    case 16: {
        n_pdu = false;
        m__raw_pdu = m__io->read_bytes((length() - 2));
        m__io__raw_pdu = new kaitai::kstream(m__raw_pdu);
        m_pdu = new data_wmhr_t(m__io__raw_pdu, this, m__root);
        break;
    }
    case 2: {
        n_pdu = false;
        m__raw_pdu = m__io->read_bytes((length() - 2));
        m__io__raw_pdu = new kaitai::kstream(m__raw_pdu);
        m_pdu = new data_rdi_t(m__io__raw_pdu, this, m__root);
        break;
    }
    default: {
        m__raw_pdu = m__io->read_bytes((length() - 2));
        break;
    }
    }
}

modbus_packet_t::~modbus_packet_t() {
    _clean_up();
}

void modbus_packet_t::_clean_up() {
    if (!n_pdu) {
        if (m__io__raw_pdu) {
            delete m__io__raw_pdu; m__io__raw_pdu = 0;
        }
        if (m_pdu) {
            delete m_pdu; m_pdu = 0;
        }
    }
}

modbus_packet_t::data_wshr_t::data_wshr_t(kaitai::kstream* p__io, modbus_packet_t* p__parent, modbus_packet_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void modbus_packet_t::data_wshr_t::_read() {
    m_address = m__io->read_u2be();
    m_count = m__io->read_u2be();
}

modbus_packet_t::data_wshr_t::~data_wshr_t() {
    _clean_up();
}

void modbus_packet_t::data_wshr_t::_clean_up() {
}

modbus_packet_t::data_wmhr_t::data_wmhr_t(kaitai::kstream* p__io, modbus_packet_t* p__parent, modbus_packet_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void modbus_packet_t::data_wmhr_t::_read() {
    m_address = m__io->read_u2be();
    m_register_count = m__io->read_u2be();
    m_byte_count = m__io->read_u1();
    m_register_values = m__io->read_bytes((register_count() * 2));
}

modbus_packet_t::data_wmhr_t::~data_wmhr_t() {
    _clean_up();
}

void modbus_packet_t::data_wmhr_t::_clean_up() {
}

modbus_packet_t::data_rir_t::data_rir_t(kaitai::kstream* p__io, modbus_packet_t* p__parent, modbus_packet_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_count = 0;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void modbus_packet_t::data_rir_t::_read() {
    m_address = m__io->read_u2be();
    m_count = new u2_max_125_t(m__io);
}

modbus_packet_t::data_rir_t::~data_rir_t() {
    _clean_up();
}

void modbus_packet_t::data_rir_t::_clean_up() {
    if (m_count) {
        delete m_count; m_count = 0;
    }
}

modbus_packet_t::data_wmc_t::data_wmc_t(kaitai::kstream* p__io, modbus_packet_t* p__parent, modbus_packet_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void modbus_packet_t::data_wmc_t::_read() {
    m_address = m__io->read_u2be();
    m_register_count = m__io->read_u2be();
    m_byte_count = m__io->read_u1();
    m_register_values = m__io->read_bytes((register_count() * 2));
}

modbus_packet_t::data_wmc_t::~data_wmc_t() {
    _clean_up();
}

void modbus_packet_t::data_wmc_t::_clean_up() {
}

modbus_packet_t::data_rdi_t::data_rdi_t(kaitai::kstream* p__io, modbus_packet_t* p__parent, modbus_packet_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_count = 0;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void modbus_packet_t::data_rdi_t::_read() {
    m_address = m__io->read_u2be();
    m_count = new u2_max_2000_t(m__io);
}

modbus_packet_t::data_rdi_t::~data_rdi_t() {
    _clean_up();
}

void modbus_packet_t::data_rdi_t::_clean_up() {
    if (m_count) {
        delete m_count; m_count = 0;
    }
}

modbus_packet_t::data_wsc_t::data_wsc_t(kaitai::kstream* p__io, modbus_packet_t* p__parent, modbus_packet_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_count = 0;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void modbus_packet_t::data_wsc_t::_read() {
    m_address = m__io->read_u2be();
    m_count = new u2_max_65280_t(m__io);
}

modbus_packet_t::data_wsc_t::~data_wsc_t() {
    _clean_up();
}

void modbus_packet_t::data_wsc_t::_clean_up() {
    if (m_count) {
        delete m_count; m_count = 0;
    }
}

modbus_packet_t::data_rc_t::data_rc_t(kaitai::kstream* p__io, modbus_packet_t* p__parent, modbus_packet_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_count = 0;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void modbus_packet_t::data_rc_t::_read() {
    m_address = m__io->read_u2be();
    m_count = new u2_max_2000_t(m__io);
}

modbus_packet_t::data_rc_t::~data_rc_t() {
    _clean_up();
}

void modbus_packet_t::data_rc_t::_clean_up() {
    if (m_count) {
        delete m_count; m_count = 0;
    }
}

modbus_packet_t::data_rhr_t::data_rhr_t(kaitai::kstream* p__io, modbus_packet_t* p__parent, modbus_packet_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_count = 0;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void modbus_packet_t::data_rhr_t::_read() {
    m_address = m__io->read_u2be();
    m_count = new u2_max_125_t(m__io);
}

modbus_packet_t::data_rhr_t::~data_rhr_t() {
    _clean_up();
}

void modbus_packet_t::data_rhr_t::_clean_up() {
    if (m_count) {
        delete m_count; m_count = 0;
    }
}
