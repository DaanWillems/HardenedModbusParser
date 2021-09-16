// Begin of __linker__
// Compiled by HILTI version 1.2.0

#include <hilti/rt/compiler-setup.h>

// 
// Linker code generated for modules:
//   - ModBus (/home/solawep/internship/HardenedModbusParser/modbusv3.spicy)
//   - filter (/opt/spicy/share/spicy/filter.spicy)

#include <hilti/rt/libhilti.h>
#include <spicy/rt/libspicy.h>

namespace __hlt::ModBus {
    using ActionCode = enum class ActionCode : int64_t { RC = 1, RDI = 2, RHR = 3, RIR = 4, WSC = 5, WSHR = 6, WMC = 15, WMHR = 16, Undef = -1 };
    struct Data;
    struct DataWMC;
    struct DataWMHR;
    struct PDU;
    struct Request;
}

namespace __hlt::filter {
    struct Base64Decode;
    struct Zlib;
}

namespace __hlt::ModBus {
    void __hook_DataWMC___on_0x25_done(hilti::rt::ValueReference<__hlt::ModBus::DataWMC>& __self);
    void __hook_DataWMC___on_0x25_error(hilti::rt::ValueReference<__hlt::ModBus::DataWMC>& __self);
    void __hook_DataWMC___on_0x25_finally(hilti::rt::ValueReference<__hlt::ModBus::DataWMC>& __self);
    void __hook_DataWMC___on_0x25_init(hilti::rt::ValueReference<__hlt::ModBus::DataWMC>& __self);
    void __hook_DataWMC___on_address(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::ModBus::DataWMC>& __self);
    void __hook_DataWMC___on_count(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::ModBus::DataWMC>& __self);
    auto __hook_DataWMC___str__(hilti::rt::ValueReference<__hlt::ModBus::DataWMC>& __self) -> std::optional<std::string>;
    void __hook_DataWMHR___on_0x25_done(hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self);
    void __hook_DataWMHR___on_0x25_error(hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self);
    void __hook_DataWMHR___on_0x25_finally(hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self);
    void __hook_DataWMHR___on_0x25_init(hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self);
    void __hook_DataWMHR___on_byteCount(const hilti::rt::integer::safe<uint8_t>& __dd, hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self);
    void __hook_DataWMHR___on_registerAddress(const hilti::rt::integer::safe<uint16_t>& __dd, hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self);
    void __hook_DataWMHR___on_registerCount(const hilti::rt::integer::safe<uint16_t>& __dd, hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self);
    void __hook_DataWMHR___on_registerValues(const hilti::rt::Vector<hilti::rt::integer::safe<uint16_t>>& __dd, hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self);
    void __hook_DataWMHR___on_registerValues_foreach(const hilti::rt::integer::safe<uint16_t>& __dd, hilti::rt::Bool& __stop, hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self);
    auto __hook_DataWMHR___str__(hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self) -> std::optional<std::string>;
    void __hook_Data___on_0x25_done(hilti::rt::ValueReference<__hlt::ModBus::Data>& __self);
    void __hook_Data___on_0x25_error(hilti::rt::ValueReference<__hlt::ModBus::Data>& __self);
    void __hook_Data___on_0x25_finally(hilti::rt::ValueReference<__hlt::ModBus::Data>& __self);
    void __hook_Data___on_0x25_init(hilti::rt::ValueReference<__hlt::ModBus::Data>& __self);
    void __hook_Data___on_address(const hilti::rt::integer::safe<int16_t>& __dd, hilti::rt::ValueReference<__hlt::ModBus::Data>& __self);
    void __hook_Data___on_count(const hilti::rt::integer::safe<int16_t>& __dd, hilti::rt::ValueReference<__hlt::ModBus::Data>& __self);
    auto __hook_Data___str__(hilti::rt::ValueReference<__hlt::ModBus::Data>& __self) -> std::optional<std::string>;
    void __hook_PDU___on_0x25_done(hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    void __hook_PDU___on_0x25_error(hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    void __hook_PDU___on_0x25_finally(hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    void __hook_PDU___on_0x25_init(hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    void __hook_PDU___on_actionCode(const ModBus::ActionCode& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    void __hook_PDU___on_rc(const hilti::rt::ValueReference<__hlt::ModBus::Data>& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    void __hook_PDU___on_rdi(const hilti::rt::ValueReference<__hlt::ModBus::Data>& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    void __hook_PDU___on_rhr(const hilti::rt::ValueReference<__hlt::ModBus::Data>& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    void __hook_PDU___on_rir(const hilti::rt::ValueReference<__hlt::ModBus::Data>& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    void __hook_PDU___on_wmc(const hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    void __hook_PDU___on_wmhr(const hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    void __hook_PDU___on_wsc(const hilti::rt::ValueReference<__hlt::ModBus::Data>& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    void __hook_PDU___on_wshr(const hilti::rt::ValueReference<__hlt::ModBus::Data>& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    auto __hook_PDU___str__(hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self) -> std::optional<std::string>;
    extern void __hook_Request___on_0x25_done(hilti::rt::ValueReference<Request>& __self);
    extern void __hook_Request___on_0x25_done_9e70(hilti::rt::ValueReference<Request>& __self);
    void __hook_Request___on_0x25_error(hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    void __hook_Request___on_0x25_finally(hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    void __hook_Request___on_0x25_gap(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::integer::safe<uint64_t>& len, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    void __hook_Request___on_0x25_init(hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    void __hook_Request___on_0x25_overlap(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::Bytes& old, const hilti::rt::Bytes& new_, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    void __hook_Request___on_0x25_skipped(const hilti::rt::integer::safe<uint64_t>& seq, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    void __hook_Request___on_0x25_undelivered(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::Bytes& data, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    void __hook_Request___on_length(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    void __hook_Request___on_pdu(const hilti::rt::ValueReference<__hlt::ModBus::PDU>& __dd, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    void __hook_Request___on_protocolID(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    void __hook_Request___on_transactionID(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    void __hook_Request___on_unitID(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    auto __hook_Request___str__(hilti::rt::ValueReference<__hlt::ModBus::Request>& __self) -> std::optional<std::string>;
}

namespace __hlt::filter {
    extern void __hook_Base64Decode___on_0x25_done(hilti::rt::ValueReference<Base64Decode>& __self);
    extern void __hook_Base64Decode___on_0x25_done_6b98(hilti::rt::ValueReference<Base64Decode>& __self);
    void __hook_Base64Decode___on_0x25_error(hilti::rt::ValueReference<__hlt::filter::Base64Decode>& __self);
    void __hook_Base64Decode___on_0x25_finally(hilti::rt::ValueReference<__hlt::filter::Base64Decode>& __self);
    void __hook_Base64Decode___on_0x25_init(hilti::rt::ValueReference<__hlt::filter::Base64Decode>& __self);
    extern void __hook_Base64Decode___on_anon_2(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<Base64Decode>& __self);
    extern void __hook_Base64Decode___on_anon_2_bbf6(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<Base64Decode>& __self);
    auto __hook_Base64Decode___str__(hilti::rt::ValueReference<__hlt::filter::Base64Decode>& __self) -> std::optional<std::string>;
    extern void __hook_Zlib___on_0x25_done(hilti::rt::ValueReference<Zlib>& __self);
    extern void __hook_Zlib___on_0x25_done_7c7b(hilti::rt::ValueReference<Zlib>& __self);
    void __hook_Zlib___on_0x25_error(hilti::rt::ValueReference<__hlt::filter::Zlib>& __self);
    void __hook_Zlib___on_0x25_finally(hilti::rt::ValueReference<__hlt::filter::Zlib>& __self);
    extern void __hook_Zlib___on_0x25_init(hilti::rt::ValueReference<Zlib>& __self);
    extern void __hook_Zlib___on_0x25_init_40ab(hilti::rt::ValueReference<Zlib>& __self);
    extern void __hook_Zlib___on_anon(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<Zlib>& __self);
    extern void __hook_Zlib___on_anon_e3c5(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<Zlib>& __self);
    auto __hook_Zlib___str__(hilti::rt::ValueReference<__hlt::filter::Zlib>& __self) -> std::optional<std::string>;
}

const char HILTI_EXPORT HILTI_WEAK * __hlto_library_version = R"({"created":1631708322.991406,"debug":false,"hilti_version":10200,"magic":"v1","optimize":false})";
const char HILTI_WEAK * __hlto_scope = "f20ebd";

void __hlt::ModBus::__hook_DataWMC___on_0x25_done(hilti::rt::ValueReference<__hlt::ModBus::DataWMC>& __self) {  }

void __hlt::ModBus::__hook_DataWMC___on_0x25_error(hilti::rt::ValueReference<__hlt::ModBus::DataWMC>& __self) {  }

void __hlt::ModBus::__hook_DataWMC___on_0x25_finally(hilti::rt::ValueReference<__hlt::ModBus::DataWMC>& __self) {  }

void __hlt::ModBus::__hook_DataWMC___on_0x25_init(hilti::rt::ValueReference<__hlt::ModBus::DataWMC>& __self) {  }

void __hlt::ModBus::__hook_DataWMC___on_address(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::ModBus::DataWMC>& __self) {  }

void __hlt::ModBus::__hook_DataWMC___on_count(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::ModBus::DataWMC>& __self) {  }

auto __hlt::ModBus::__hook_DataWMC___str__(hilti::rt::ValueReference<__hlt::ModBus::DataWMC>& __self) -> std::optional<std::string> { return {}; }

void __hlt::ModBus::__hook_DataWMHR___on_0x25_done(hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self) {  }

void __hlt::ModBus::__hook_DataWMHR___on_0x25_error(hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self) {  }

void __hlt::ModBus::__hook_DataWMHR___on_0x25_finally(hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self) {  }

void __hlt::ModBus::__hook_DataWMHR___on_0x25_init(hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self) {  }

void __hlt::ModBus::__hook_DataWMHR___on_byteCount(const hilti::rt::integer::safe<uint8_t>& __dd, hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self) {  }

void __hlt::ModBus::__hook_DataWMHR___on_registerAddress(const hilti::rt::integer::safe<uint16_t>& __dd, hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self) {  }

void __hlt::ModBus::__hook_DataWMHR___on_registerCount(const hilti::rt::integer::safe<uint16_t>& __dd, hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self) {  }

void __hlt::ModBus::__hook_DataWMHR___on_registerValues(const hilti::rt::Vector<hilti::rt::integer::safe<uint16_t>>& __dd, hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self) {  }

void __hlt::ModBus::__hook_DataWMHR___on_registerValues_foreach(const hilti::rt::integer::safe<uint16_t>& __dd, hilti::rt::Bool& __stop, hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self) {  }

auto __hlt::ModBus::__hook_DataWMHR___str__(hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self) -> std::optional<std::string> { return {}; }

void __hlt::ModBus::__hook_Data___on_0x25_done(hilti::rt::ValueReference<__hlt::ModBus::Data>& __self) {  }

void __hlt::ModBus::__hook_Data___on_0x25_error(hilti::rt::ValueReference<__hlt::ModBus::Data>& __self) {  }

void __hlt::ModBus::__hook_Data___on_0x25_finally(hilti::rt::ValueReference<__hlt::ModBus::Data>& __self) {  }

void __hlt::ModBus::__hook_Data___on_0x25_init(hilti::rt::ValueReference<__hlt::ModBus::Data>& __self) {  }

void __hlt::ModBus::__hook_Data___on_address(const hilti::rt::integer::safe<int16_t>& __dd, hilti::rt::ValueReference<__hlt::ModBus::Data>& __self) {  }

void __hlt::ModBus::__hook_Data___on_count(const hilti::rt::integer::safe<int16_t>& __dd, hilti::rt::ValueReference<__hlt::ModBus::Data>& __self) {  }

auto __hlt::ModBus::__hook_Data___str__(hilti::rt::ValueReference<__hlt::ModBus::Data>& __self) -> std::optional<std::string> { return {}; }

void __hlt::ModBus::__hook_PDU___on_0x25_done(hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self) {  }

void __hlt::ModBus::__hook_PDU___on_0x25_error(hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self) {  }

void __hlt::ModBus::__hook_PDU___on_0x25_finally(hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self) {  }

void __hlt::ModBus::__hook_PDU___on_0x25_init(hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self) {  }

void __hlt::ModBus::__hook_PDU___on_actionCode(const ModBus::ActionCode& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self) {  }

void __hlt::ModBus::__hook_PDU___on_rc(const hilti::rt::ValueReference<__hlt::ModBus::Data>& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self) {  }

void __hlt::ModBus::__hook_PDU___on_rdi(const hilti::rt::ValueReference<__hlt::ModBus::Data>& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self) {  }

void __hlt::ModBus::__hook_PDU___on_rhr(const hilti::rt::ValueReference<__hlt::ModBus::Data>& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self) {  }

void __hlt::ModBus::__hook_PDU___on_rir(const hilti::rt::ValueReference<__hlt::ModBus::Data>& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self) {  }

void __hlt::ModBus::__hook_PDU___on_wmc(const hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self) {  }

void __hlt::ModBus::__hook_PDU___on_wmhr(const hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self) {  }

void __hlt::ModBus::__hook_PDU___on_wsc(const hilti::rt::ValueReference<__hlt::ModBus::Data>& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self) {  }

void __hlt::ModBus::__hook_PDU___on_wshr(const hilti::rt::ValueReference<__hlt::ModBus::Data>& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self) {  }

auto __hlt::ModBus::__hook_PDU___str__(hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self) -> std::optional<std::string> { return {}; }

extern void __hlt::ModBus::__hook_Request___on_0x25_done(hilti::rt::ValueReference<Request>& __self) { __hlt::ModBus::__hook_Request___on_0x25_done_9e70(__self); }

void __hlt::ModBus::__hook_Request___on_0x25_error(hilti::rt::ValueReference<__hlt::ModBus::Request>& __self) {  }

void __hlt::ModBus::__hook_Request___on_0x25_finally(hilti::rt::ValueReference<__hlt::ModBus::Request>& __self) {  }

void __hlt::ModBus::__hook_Request___on_0x25_gap(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::integer::safe<uint64_t>& len, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self) {  }

void __hlt::ModBus::__hook_Request___on_0x25_init(hilti::rt::ValueReference<__hlt::ModBus::Request>& __self) {  }

void __hlt::ModBus::__hook_Request___on_0x25_overlap(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::Bytes& old, const hilti::rt::Bytes& new_, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self) {  }

void __hlt::ModBus::__hook_Request___on_0x25_skipped(const hilti::rt::integer::safe<uint64_t>& seq, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self) {  }

void __hlt::ModBus::__hook_Request___on_0x25_undelivered(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::Bytes& data, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self) {  }

void __hlt::ModBus::__hook_Request___on_length(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self) {  }

void __hlt::ModBus::__hook_Request___on_pdu(const hilti::rt::ValueReference<__hlt::ModBus::PDU>& __dd, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self) {  }

void __hlt::ModBus::__hook_Request___on_protocolID(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self) {  }

void __hlt::ModBus::__hook_Request___on_transactionID(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self) {  }

void __hlt::ModBus::__hook_Request___on_unitID(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self) {  }

auto __hlt::ModBus::__hook_Request___str__(hilti::rt::ValueReference<__hlt::ModBus::Request>& __self) -> std::optional<std::string> { return {}; }

extern void __hlt::filter::__hook_Base64Decode___on_0x25_done(hilti::rt::ValueReference<Base64Decode>& __self) { __hlt::filter::__hook_Base64Decode___on_0x25_done_6b98(__self); }

void __hlt::filter::__hook_Base64Decode___on_0x25_error(hilti::rt::ValueReference<__hlt::filter::Base64Decode>& __self) {  }

void __hlt::filter::__hook_Base64Decode___on_0x25_finally(hilti::rt::ValueReference<__hlt::filter::Base64Decode>& __self) {  }

void __hlt::filter::__hook_Base64Decode___on_0x25_init(hilti::rt::ValueReference<__hlt::filter::Base64Decode>& __self) {  }

extern void __hlt::filter::__hook_Base64Decode___on_anon_2(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<Base64Decode>& __self) { __hlt::filter::__hook_Base64Decode___on_anon_2_bbf6(__dd, __self); }

auto __hlt::filter::__hook_Base64Decode___str__(hilti::rt::ValueReference<__hlt::filter::Base64Decode>& __self) -> std::optional<std::string> { return {}; }

extern void __hlt::filter::__hook_Zlib___on_0x25_done(hilti::rt::ValueReference<Zlib>& __self) { __hlt::filter::__hook_Zlib___on_0x25_done_7c7b(__self); }

void __hlt::filter::__hook_Zlib___on_0x25_error(hilti::rt::ValueReference<__hlt::filter::Zlib>& __self) {  }

void __hlt::filter::__hook_Zlib___on_0x25_finally(hilti::rt::ValueReference<__hlt::filter::Zlib>& __self) {  }

extern void __hlt::filter::__hook_Zlib___on_0x25_init(hilti::rt::ValueReference<Zlib>& __self) { __hlt::filter::__hook_Zlib___on_0x25_init_40ab(__self); }

extern void __hlt::filter::__hook_Zlib___on_anon(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<Zlib>& __self) { __hlt::filter::__hook_Zlib___on_anon_e3c5(__dd, __self); }

auto __hlt::filter::__hook_Zlib___str__(hilti::rt::ValueReference<__hlt::filter::Zlib>& __self) -> std::optional<std::string> { return {}; }
