// Begin of ModBus (from "modbusv3.spicy")
// Compiled by HILTI version 1.2.0

#include <hilti/rt/compiler-setup.h>

#include <hilti/rt/libhilti.h>
#include <spicy/rt/libspicy.h>

namespace __hlt::ModBus {
    struct Data;
    struct DataWMC;
    struct DataWMHR;
    struct PDU;
    struct Request;
    enum class ActionCode : int64_t { RC = 1, RDI = 2, RHR = 3, RIR = 4, WSC = 5, WSHR = 6, WMC = 15, WMHR = 16, Undef = -1 };
}

namespace __hlt::type_info { namespace {
    extern const hilti::rt::TypeInfo __ti_ModBus_ActionCode;
    extern const hilti::rt::TypeInfo __ti_ModBus_Data;
    extern const hilti::rt::TypeInfo __ti_ModBus_DataWMC;
    extern const hilti::rt::TypeInfo __ti_ModBus_DataWMHR;
    extern const hilti::rt::TypeInfo __ti_ModBus_PDU;
    extern const hilti::rt::TypeInfo __ti_ModBus_Request;
    extern const hilti::rt::TypeInfo __ti_spicy_rt_Filters;
    extern const hilti::rt::TypeInfo __ti_spicy_rt_SinkState;
    extern const hilti::rt::TypeInfo __ti_strong_refx30spicy_rt_Filters;
    extern const hilti::rt::TypeInfo __ti_value_refx30ModBus_Data;
    extern const hilti::rt::TypeInfo __ti_value_refx30ModBus_DataWMHR;
    extern const hilti::rt::TypeInfo __ti_value_refx30ModBus_PDU;
    extern const hilti::rt::TypeInfo __ti_vectorx30uintx3016;
} }

namespace __hlt::ModBus {
    struct Request : hilti::rt::trait::isStruct, hilti::rt::Controllable<Request> {
        inline auto __self() { return hilti::rt::ValueReference<Request>::self(this); }
        std::optional<hilti::rt::Bytes> transactionID{};
        void __on_transactionID(const hilti::rt::Bytes& __dd);
        std::optional<hilti::rt::Bytes> protocolID{};
        void __on_protocolID(const hilti::rt::Bytes& __dd);
        std::optional<hilti::rt::Bytes> length{};
        void __on_length(const hilti::rt::Bytes& __dd);
        std::optional<hilti::rt::Bytes> unitID{};
        void __on_unitID(const hilti::rt::Bytes& __dd);
        std::optional<hilti::rt::ValueReference<PDU>> pdu{};
        void __on_pdu(const hilti::rt::ValueReference<PDU>& __dd);
        void __on_0x25_init();
        void __on_0x25_done();
        void __on_0x25_error();
        auto __str__() -> std::optional<std::string>;
        void __on_0x25_finally();
        void __on_0x25_gap(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::integer::safe<uint64_t>& len);
        void __on_0x25_overlap(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::Bytes& old, const hilti::rt::Bytes& new_);
        void __on_0x25_skipped(const hilti::rt::integer::safe<uint64_t>& seq);
        void __on_0x25_undelivered(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::Bytes& data);
        inline static spicy::rt::Parser __parser{};
        spicy::rt::sink::detail::State* __sink{};
        hilti::rt::StrongReference<spicy::rt::filter::detail::Filters> __filters{};
        auto __parse_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        static auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View;
        static auto parse2(hilti::rt::ValueReference<Request>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View;
        static auto parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View;
        auto __parse_ModBus_Request_stage2(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        inline Request();
        Request(const Request&) = default;
        Request(Request&&) = default;
        Request& operator=(const Request&) = default;
        Request& operator=(Request&&) = default;
        inline Request(std::optional<std::optional<hilti::rt::Bytes>> transactionID, std::optional<std::optional<hilti::rt::Bytes>> protocolID, std::optional<std::optional<hilti::rt::Bytes>> length, std::optional<std::optional<hilti::rt::Bytes>> unitID, std::optional<std::optional<hilti::rt::ValueReference<PDU>>> pdu);
        template<typename F> void __visit(F _) const { _("transactionID", transactionID); _("protocolID", protocolID); _("length", length); _("unitID", unitID); _("pdu", pdu); }
    };

    struct PDU : hilti::rt::trait::isStruct, hilti::rt::Controllable<PDU> {
        inline auto __self() { return hilti::rt::ValueReference<PDU>::self(this); }
        std::optional<ModBus::ActionCode> actionCode{};
        void __on_actionCode(const ModBus::ActionCode& __dd);
        std::optional<hilti::rt::ValueReference<Data>> rc{};
        void __on_rc(const hilti::rt::ValueReference<Data>& __dd);
        std::optional<hilti::rt::ValueReference<Data>> rdi{};
        void __on_rdi(const hilti::rt::ValueReference<Data>& __dd);
        std::optional<hilti::rt::ValueReference<Data>> rhr{};
        void __on_rhr(const hilti::rt::ValueReference<Data>& __dd);
        std::optional<hilti::rt::ValueReference<Data>> rir{};
        void __on_rir(const hilti::rt::ValueReference<Data>& __dd);
        std::optional<hilti::rt::ValueReference<Data>> wsc{};
        void __on_wsc(const hilti::rt::ValueReference<Data>& __dd);
        std::optional<hilti::rt::ValueReference<Data>> wshr{};
        void __on_wshr(const hilti::rt::ValueReference<Data>& __dd);
        std::optional<hilti::rt::ValueReference<DataWMHR>> wmc{};
        void __on_wmc(const hilti::rt::ValueReference<DataWMHR>& __dd);
        std::optional<hilti::rt::ValueReference<DataWMHR>> wmhr{};
        void __on_wmhr(const hilti::rt::ValueReference<DataWMHR>& __dd);
        void __on_0x25_init();
        void __on_0x25_done();
        void __on_0x25_error();
        auto __str__() -> std::optional<std::string>;
        void __on_0x25_finally();
        auto __parse_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        static auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View;
        static auto parse2(hilti::rt::ValueReference<PDU>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View;
        static auto parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View;
        auto __parse_switch_2_case_1_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe, hilti::rt::ValueReference<PDU>& __dst) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        auto __parse_switch_2_case_2_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe, hilti::rt::ValueReference<PDU>& __dst) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        auto __parse_switch_2_case_3_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe, hilti::rt::ValueReference<PDU>& __dst) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        auto __parse_switch_2_case_4_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe, hilti::rt::ValueReference<PDU>& __dst) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        auto __parse_switch_2_case_5_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe, hilti::rt::ValueReference<PDU>& __dst) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        auto __parse_switch_2_case_6_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe, hilti::rt::ValueReference<PDU>& __dst) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        auto __parse_switch_2_case_7_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe, hilti::rt::ValueReference<PDU>& __dst) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        auto __parse_switch_2_case_8_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe, hilti::rt::ValueReference<PDU>& __dst) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        auto __parse_switch_2_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe, hilti::rt::ValueReference<PDU>& __dst) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        inline PDU();
        PDU(const PDU&) = default;
        PDU(PDU&&) = default;
        PDU& operator=(const PDU&) = default;
        PDU& operator=(PDU&&) = default;
        inline PDU(std::optional<std::optional<ModBus::ActionCode>> actionCode, std::optional<std::optional<hilti::rt::ValueReference<Data>>> rc, std::optional<std::optional<hilti::rt::ValueReference<Data>>> rdi, std::optional<std::optional<hilti::rt::ValueReference<Data>>> rhr, std::optional<std::optional<hilti::rt::ValueReference<Data>>> rir, std::optional<std::optional<hilti::rt::ValueReference<Data>>> wsc, std::optional<std::optional<hilti::rt::ValueReference<Data>>> wshr, std::optional<std::optional<hilti::rt::ValueReference<DataWMHR>>> wmc, std::optional<std::optional<hilti::rt::ValueReference<DataWMHR>>> wmhr);
        template<typename F> void __visit(F _) const { _("actionCode", actionCode); _("rc", rc); _("rdi", rdi); _("rhr", rhr); _("rir", rir); _("wsc", wsc); _("wshr", wshr); _("wmc", wmc); _("wmhr", wmhr); }
    };

    struct Data : hilti::rt::trait::isStruct, hilti::rt::Controllable<Data> {
        inline auto __self() { return hilti::rt::ValueReference<Data>::self(this); }
        std::optional<hilti::rt::integer::safe<int16_t>> address{};
        void __on_address(const hilti::rt::integer::safe<int16_t>& __dd);
        std::optional<hilti::rt::integer::safe<int16_t>> count{};
        void __on_count(const hilti::rt::integer::safe<int16_t>& __dd);
        void __on_0x25_init();
        void __on_0x25_done();
        void __on_0x25_error();
        auto __str__() -> std::optional<std::string>;
        void __on_0x25_finally();
        auto __parse_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        static auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View;
        static auto parse2(hilti::rt::ValueReference<Data>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View;
        static auto parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View;
        inline Data();
        Data(const Data&) = default;
        Data(Data&&) = default;
        Data& operator=(const Data&) = default;
        Data& operator=(Data&&) = default;
        inline Data(std::optional<std::optional<hilti::rt::integer::safe<int16_t>>> address, std::optional<std::optional<hilti::rt::integer::safe<int16_t>>> count);
        template<typename F> void __visit(F _) const { _("address", address); _("count", count); }
    };

    struct DataWMHR : hilti::rt::trait::isStruct, hilti::rt::Controllable<DataWMHR> {
        inline auto __self() { return hilti::rt::ValueReference<DataWMHR>::self(this); }
        std::optional<hilti::rt::integer::safe<uint16_t>> registerAddress{};
        void __on_registerAddress(const hilti::rt::integer::safe<uint16_t>& __dd);
        std::optional<hilti::rt::integer::safe<uint16_t>> registerCount{};
        void __on_registerCount(const hilti::rt::integer::safe<uint16_t>& __dd);
        std::optional<hilti::rt::integer::safe<uint8_t>> byteCount{};
        void __on_byteCount(const hilti::rt::integer::safe<uint8_t>& __dd);
        std::optional<hilti::rt::Vector<hilti::rt::integer::safe<uint16_t>>> registerValues{};
        void __on_registerValues(const hilti::rt::Vector<hilti::rt::integer::safe<uint16_t>>& __dd);
        void __on_registerValues_foreach(const hilti::rt::integer::safe<uint16_t>& __dd, hilti::rt::Bool& __stop);
        void __on_0x25_init();
        void __on_0x25_done();
        void __on_0x25_error();
        auto __str__() -> std::optional<std::string>;
        void __on_0x25_finally();
        auto __parse_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        static auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View;
        static auto parse2(hilti::rt::ValueReference<DataWMHR>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View;
        static auto parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View;
        auto __parse_registerValues_3_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe, hilti::rt::Vector<hilti::rt::integer::safe<uint16_t>>& __dst) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        inline DataWMHR();
        DataWMHR(const DataWMHR&) = default;
        DataWMHR(DataWMHR&&) = default;
        DataWMHR& operator=(const DataWMHR&) = default;
        DataWMHR& operator=(DataWMHR&&) = default;
        inline DataWMHR(std::optional<std::optional<hilti::rt::integer::safe<uint16_t>>> registerAddress, std::optional<std::optional<hilti::rt::integer::safe<uint16_t>>> registerCount, std::optional<std::optional<hilti::rt::integer::safe<uint8_t>>> byteCount, std::optional<std::optional<hilti::rt::Vector<hilti::rt::integer::safe<uint16_t>>>> registerValues);
        template<typename F> void __visit(F _) const { _("registerAddress", registerAddress); _("registerCount", registerCount); _("byteCount", byteCount); _("registerValues", registerValues); }
    };

    struct DataWMC : hilti::rt::trait::isStruct, hilti::rt::Controllable<DataWMC> {
        inline auto __self() { return hilti::rt::ValueReference<DataWMC>::self(this); }
        std::optional<hilti::rt::Bytes> address{};
        void __on_address(const hilti::rt::Bytes& __dd);
        std::optional<hilti::rt::Bytes> count{};
        void __on_count(const hilti::rt::Bytes& __dd);
        void __on_0x25_init();
        void __on_0x25_done();
        void __on_0x25_error();
        auto __str__() -> std::optional<std::string>;
        void __on_0x25_finally();
        auto __parse_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        static auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View;
        static auto parse2(hilti::rt::ValueReference<DataWMC>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View;
        static auto parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View;
        inline DataWMC();
        DataWMC(const DataWMC&) = default;
        DataWMC(DataWMC&&) = default;
        DataWMC& operator=(const DataWMC&) = default;
        DataWMC& operator=(DataWMC&&) = default;
        inline DataWMC(std::optional<std::optional<hilti::rt::Bytes>> address, std::optional<std::optional<hilti::rt::Bytes>> count);
        template<typename F> void __visit(F _) const { _("address", address); _("count", count); }
    };

    extern void __hook_DataWMC___on_0x25_done(hilti::rt::ValueReference<__hlt::ModBus::DataWMC>& __self);
    extern void __hook_DataWMC___on_0x25_error(hilti::rt::ValueReference<__hlt::ModBus::DataWMC>& __self);
    extern void __hook_DataWMC___on_0x25_finally(hilti::rt::ValueReference<__hlt::ModBus::DataWMC>& __self);
    extern void __hook_DataWMC___on_0x25_init(hilti::rt::ValueReference<__hlt::ModBus::DataWMC>& __self);
    extern void __hook_DataWMC___on_address(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::ModBus::DataWMC>& __self);
    extern void __hook_DataWMC___on_count(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::ModBus::DataWMC>& __self);
    extern auto __hook_DataWMC___str__(hilti::rt::ValueReference<__hlt::ModBus::DataWMC>& __self) -> std::optional<std::string>;
    extern void __hook_DataWMHR___on_0x25_done(hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self);
    extern void __hook_DataWMHR___on_0x25_error(hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self);
    extern void __hook_DataWMHR___on_0x25_finally(hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self);
    extern void __hook_DataWMHR___on_0x25_init(hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self);
    extern void __hook_DataWMHR___on_byteCount(const hilti::rt::integer::safe<uint8_t>& __dd, hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self);
    extern void __hook_DataWMHR___on_registerAddress(const hilti::rt::integer::safe<uint16_t>& __dd, hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self);
    extern void __hook_DataWMHR___on_registerCount(const hilti::rt::integer::safe<uint16_t>& __dd, hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self);
    extern void __hook_DataWMHR___on_registerValues(const hilti::rt::Vector<hilti::rt::integer::safe<uint16_t>>& __dd, hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self);
    extern void __hook_DataWMHR___on_registerValues_foreach(const hilti::rt::integer::safe<uint16_t>& __dd, hilti::rt::Bool& __stop, hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self);
    extern auto __hook_DataWMHR___str__(hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __self) -> std::optional<std::string>;
    extern void __hook_Data___on_0x25_done(hilti::rt::ValueReference<__hlt::ModBus::Data>& __self);
    extern void __hook_Data___on_0x25_error(hilti::rt::ValueReference<__hlt::ModBus::Data>& __self);
    extern void __hook_Data___on_0x25_finally(hilti::rt::ValueReference<__hlt::ModBus::Data>& __self);
    extern void __hook_Data___on_0x25_init(hilti::rt::ValueReference<__hlt::ModBus::Data>& __self);
    extern void __hook_Data___on_address(const hilti::rt::integer::safe<int16_t>& __dd, hilti::rt::ValueReference<__hlt::ModBus::Data>& __self);
    extern void __hook_Data___on_count(const hilti::rt::integer::safe<int16_t>& __dd, hilti::rt::ValueReference<__hlt::ModBus::Data>& __self);
    extern auto __hook_Data___str__(hilti::rt::ValueReference<__hlt::ModBus::Data>& __self) -> std::optional<std::string>;
    extern void __hook_PDU___on_0x25_done(hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    extern void __hook_PDU___on_0x25_error(hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    extern void __hook_PDU___on_0x25_finally(hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    extern void __hook_PDU___on_0x25_init(hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    extern void __hook_PDU___on_actionCode(const ModBus::ActionCode& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    extern void __hook_PDU___on_rc(const hilti::rt::ValueReference<__hlt::ModBus::Data>& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    extern void __hook_PDU___on_rdi(const hilti::rt::ValueReference<__hlt::ModBus::Data>& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    extern void __hook_PDU___on_rhr(const hilti::rt::ValueReference<__hlt::ModBus::Data>& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    extern void __hook_PDU___on_rir(const hilti::rt::ValueReference<__hlt::ModBus::Data>& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    extern void __hook_PDU___on_wmc(const hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    extern void __hook_PDU___on_wmhr(const hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    extern void __hook_PDU___on_wsc(const hilti::rt::ValueReference<__hlt::ModBus::Data>& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    extern void __hook_PDU___on_wshr(const hilti::rt::ValueReference<__hlt::ModBus::Data>& __dd, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self);
    extern auto __hook_PDU___str__(hilti::rt::ValueReference<__hlt::ModBus::PDU>& __self) -> std::optional<std::string>;
    extern void __hook_Request___on_0x25_done(hilti::rt::ValueReference<Request>& __self);
    extern void __hook_Request___on_0x25_done(hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    extern void __hook_Request___on_0x25_done_9e70(hilti::rt::ValueReference<Request>& __self);
    extern void __hook_Request___on_0x25_error(hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    extern void __hook_Request___on_0x25_finally(hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    extern void __hook_Request___on_0x25_gap(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::integer::safe<uint64_t>& len, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    extern void __hook_Request___on_0x25_init(hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    extern void __hook_Request___on_0x25_overlap(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::Bytes& old, const hilti::rt::Bytes& new_, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    extern void __hook_Request___on_0x25_skipped(const hilti::rt::integer::safe<uint64_t>& seq, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    extern void __hook_Request___on_0x25_undelivered(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::Bytes& data, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    extern void __hook_Request___on_length(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    extern void __hook_Request___on_pdu(const hilti::rt::ValueReference<__hlt::ModBus::PDU>& __dd, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    extern void __hook_Request___on_protocolID(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    extern void __hook_Request___on_transactionID(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    extern void __hook_Request___on_unitID(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::ModBus::Request>& __self);
    extern auto __hook_Request___str__(hilti::rt::ValueReference<__hlt::ModBus::Request>& __self) -> std::optional<std::string>;
    extern void __init_module();
    extern void __register_ModBus_Request();
    extern void __register_module();
    inline auto operator<<(std::ostream& o, ActionCode x) -> std::ostream&;
    static auto operator<<(std::ostream& o, const __hlt::ModBus::Request& x) -> std::ostream&;
    static auto operator<<(std::ostream& o, const __hlt::ModBus::PDU& x) -> std::ostream&;
    static auto operator<<(std::ostream& o, const __hlt::ModBus::Data& x) -> std::ostream&;
    static auto operator<<(std::ostream& o, const __hlt::ModBus::DataWMC& x) -> std::ostream&;
    static auto operator<<(std::ostream& o, const __hlt::ModBus::DataWMHR& x) -> std::ostream&;
}

namespace hilti::rt::detail::adl {
    inline auto to_string(__hlt::ModBus::ActionCode x, adl::tag) -> std::string;
}

namespace hlt::ModBus::Data {
    extern auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable;
    extern auto parse2(hilti::rt::ValueReference<__hlt::ModBus::Data>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable;
    extern auto parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable;
}

namespace hlt::ModBus::DataWMC {
    extern auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable;
    extern auto parse2(hilti::rt::ValueReference<__hlt::ModBus::DataWMC>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable;
    extern auto parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable;
}

namespace hlt::ModBus::DataWMHR {
    extern auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable;
    extern auto parse2(hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable;
    extern auto parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable;
}

namespace hlt::ModBus::PDU {
    extern auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable;
    extern auto parse2(hilti::rt::ValueReference<__hlt::ModBus::PDU>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable;
    extern auto parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable;
}

namespace hlt::ModBus::Request {
    extern auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable;
    extern auto parse2(hilti::rt::ValueReference<__hlt::ModBus::Request>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable;
    extern auto parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable;
}

namespace __hlt::type_info { namespace {
    const hilti::rt::TypeInfo __ti_ModBus_ActionCode = { "ModBus::ActionCode", "ModBus::ActionCode", new hilti::rt::type_info::Enum(std::vector<hilti::rt::type_info::enum_::Label>({hilti::rt::type_info::enum_::Label{ "RC", 1 }, hilti::rt::type_info::enum_::Label{ "RDI", 2 }, hilti::rt::type_info::enum_::Label{ "RHR", 3 }, hilti::rt::type_info::enum_::Label{ "RIR", 4 }, hilti::rt::type_info::enum_::Label{ "WSC", 5 }, hilti::rt::type_info::enum_::Label{ "WSHR", 6 }, hilti::rt::type_info::enum_::Label{ "WMC", 15 }, hilti::rt::type_info::enum_::Label{ "WMHR", 16 }, hilti::rt::type_info::enum_::Label{ "Undef", -1 }})) };
    const hilti::rt::TypeInfo __ti_ModBus_Data = { "ModBus::Data", "ModBus::Data", new hilti::rt::type_info::Struct(std::vector<hilti::rt::type_info::struct_::Field>({hilti::rt::type_info::struct_::Field{ "address", &hilti::rt::type_info::int16, offsetof(ModBus::Data, address), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::integer::safe<int16_t>>() }, hilti::rt::type_info::struct_::Field{ "count", &hilti::rt::type_info::int16, offsetof(ModBus::Data, count), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::integer::safe<int16_t>>() }})) };
    const hilti::rt::TypeInfo __ti_ModBus_DataWMC = { "ModBus::DataWMC", "ModBus::DataWMC", new hilti::rt::type_info::Struct(std::vector<hilti::rt::type_info::struct_::Field>({hilti::rt::type_info::struct_::Field{ "address", &hilti::rt::type_info::bytes, offsetof(ModBus::DataWMC, address), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::Bytes>() }, hilti::rt::type_info::struct_::Field{ "count", &hilti::rt::type_info::bytes, offsetof(ModBus::DataWMC, count), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::Bytes>() }})) };
    const hilti::rt::TypeInfo __ti_ModBus_DataWMHR = { "ModBus::DataWMHR", "ModBus::DataWMHR", new hilti::rt::type_info::Struct(std::vector<hilti::rt::type_info::struct_::Field>({hilti::rt::type_info::struct_::Field{ "registerAddress", &hilti::rt::type_info::uint16, offsetof(ModBus::DataWMHR, registerAddress), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::integer::safe<uint16_t>>() }, hilti::rt::type_info::struct_::Field{ "registerCount", &hilti::rt::type_info::uint16, offsetof(ModBus::DataWMHR, registerCount), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::integer::safe<uint16_t>>() }, hilti::rt::type_info::struct_::Field{ "byteCount", &hilti::rt::type_info::uint8, offsetof(ModBus::DataWMHR, byteCount), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::integer::safe<uint8_t>>() }, hilti::rt::type_info::struct_::Field{ "registerValues", &type_info::__ti_vectorx30uintx3016, offsetof(ModBus::DataWMHR, registerValues), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::Vector<hilti::rt::integer::safe<uint16_t>>>() }})) };
    const hilti::rt::TypeInfo __ti_ModBus_PDU = { "ModBus::PDU", "ModBus::PDU", new hilti::rt::type_info::Struct(std::vector<hilti::rt::type_info::struct_::Field>({hilti::rt::type_info::struct_::Field{ "actionCode", &type_info::__ti_ModBus_ActionCode, offsetof(ModBus::PDU, actionCode), false, hilti::rt::type_info::struct_::Field::accessor_optional<ModBus::ActionCode>() }, hilti::rt::type_info::struct_::Field{ "rc", &type_info::__ti_value_refx30ModBus_Data, offsetof(ModBus::PDU, rc), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::ValueReference<__hlt::ModBus::Data>>() }, hilti::rt::type_info::struct_::Field{ "rdi", &type_info::__ti_value_refx30ModBus_Data, offsetof(ModBus::PDU, rdi), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::ValueReference<__hlt::ModBus::Data>>() }, hilti::rt::type_info::struct_::Field{ "rhr", &type_info::__ti_value_refx30ModBus_Data, offsetof(ModBus::PDU, rhr), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::ValueReference<__hlt::ModBus::Data>>() }, hilti::rt::type_info::struct_::Field{ "rir", &type_info::__ti_value_refx30ModBus_Data, offsetof(ModBus::PDU, rir), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::ValueReference<__hlt::ModBus::Data>>() }, hilti::rt::type_info::struct_::Field{ "wsc", &type_info::__ti_value_refx30ModBus_Data, offsetof(ModBus::PDU, wsc), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::ValueReference<__hlt::ModBus::Data>>() }, hilti::rt::type_info::struct_::Field{ "wshr", &type_info::__ti_value_refx30ModBus_Data, offsetof(ModBus::PDU, wshr), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::ValueReference<__hlt::ModBus::Data>>() }, hilti::rt::type_info::struct_::Field{ "wmc", &type_info::__ti_value_refx30ModBus_DataWMHR, offsetof(ModBus::PDU, wmc), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>>() }, hilti::rt::type_info::struct_::Field{ "wmhr", &type_info::__ti_value_refx30ModBus_DataWMHR, offsetof(ModBus::PDU, wmhr), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>>() }})) };
    const hilti::rt::TypeInfo __ti_ModBus_Request = { "ModBus::Request", "ModBus::Request", new hilti::rt::type_info::Struct(std::vector<hilti::rt::type_info::struct_::Field>({hilti::rt::type_info::struct_::Field{ "transactionID", &hilti::rt::type_info::bytes, offsetof(ModBus::Request, transactionID), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::Bytes>() }, hilti::rt::type_info::struct_::Field{ "protocolID", &hilti::rt::type_info::bytes, offsetof(ModBus::Request, protocolID), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::Bytes>() }, hilti::rt::type_info::struct_::Field{ "length", &hilti::rt::type_info::bytes, offsetof(ModBus::Request, length), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::Bytes>() }, hilti::rt::type_info::struct_::Field{ "unitID", &hilti::rt::type_info::bytes, offsetof(ModBus::Request, unitID), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::Bytes>() }, hilti::rt::type_info::struct_::Field{ "pdu", &type_info::__ti_value_refx30ModBus_PDU, offsetof(ModBus::Request, pdu), false, hilti::rt::type_info::struct_::Field::accessor_optional<hilti::rt::ValueReference<__hlt::ModBus::PDU>>() }, hilti::rt::type_info::struct_::Field{ "__sink", &type_info::__ti_spicy_rt_SinkState, offsetof(ModBus::Request, __sink), true }, hilti::rt::type_info::struct_::Field{ "__filters", &type_info::__ti_strong_refx30spicy_rt_Filters, offsetof(ModBus::Request, __filters), true }})) };
    const hilti::rt::TypeInfo __ti_spicy_rt_Filters = { "spicy_rt::Filters", "spicy_rt::Filters", new hilti::rt::type_info::Library() };
    const hilti::rt::TypeInfo __ti_spicy_rt_SinkState = { "spicy_rt::SinkState", "spicy_rt::SinkState", new hilti::rt::type_info::Library() };
    const hilti::rt::TypeInfo __ti_strong_refx30spicy_rt_Filters = { {}, "strong_ref<spicy_rt::Filters>", new hilti::rt::type_info::StrongReference(&type_info::__ti_spicy_rt_Filters, hilti::rt::type_info::StrongReference::accessor<spicy::rt::filter::detail::Filters>()) };
    const hilti::rt::TypeInfo __ti_value_refx30ModBus_Data = { {}, "value_ref<ModBus::Data>", new hilti::rt::type_info::ValueReference(&type_info::__ti_ModBus_Data, hilti::rt::type_info::ValueReference::accessor<__hlt::ModBus::Data>()) };
    const hilti::rt::TypeInfo __ti_value_refx30ModBus_DataWMHR = { {}, "value_ref<ModBus::DataWMHR>", new hilti::rt::type_info::ValueReference(&type_info::__ti_ModBus_DataWMHR, hilti::rt::type_info::ValueReference::accessor<__hlt::ModBus::DataWMHR>()) };
    const hilti::rt::TypeInfo __ti_value_refx30ModBus_PDU = { {}, "value_ref<ModBus::PDU>", new hilti::rt::type_info::ValueReference(&type_info::__ti_ModBus_PDU, hilti::rt::type_info::ValueReference::accessor<__hlt::ModBus::PDU>()) };
    const hilti::rt::TypeInfo __ti_vectorx30uintx3016 = { {}, "vector<uint<16>>", new hilti::rt::type_info::Vector(&hilti::rt::type_info::uint16, hilti::rt::type_info::Vector::accessor<hilti::rt::integer::safe<uint16_t>>()) };
} }

namespace __hlt::ModBus {
    inline Data::Data() {
    }

    inline Data::Data(std::optional<std::optional<hilti::rt::integer::safe<int16_t>>> address, std::optional<std::optional<hilti::rt::integer::safe<int16_t>>> count) : Data() {
        if ( address ) this->address = std::move(*address);
        if ( count ) this->count = std::move(*count);
    }

    
    inline DataWMC::DataWMC() {
    }

    inline DataWMC::DataWMC(std::optional<std::optional<hilti::rt::Bytes>> address, std::optional<std::optional<hilti::rt::Bytes>> count) : DataWMC() {
        if ( address ) this->address = std::move(*address);
        if ( count ) this->count = std::move(*count);
    }

    
    inline DataWMHR::DataWMHR() {
    }

    inline DataWMHR::DataWMHR(std::optional<std::optional<hilti::rt::integer::safe<uint16_t>>> registerAddress, std::optional<std::optional<hilti::rt::integer::safe<uint16_t>>> registerCount, std::optional<std::optional<hilti::rt::integer::safe<uint8_t>>> byteCount, std::optional<std::optional<hilti::rt::Vector<hilti::rt::integer::safe<uint16_t>>>> registerValues) : DataWMHR() {
        if ( registerAddress ) this->registerAddress = std::move(*registerAddress);
        if ( registerCount ) this->registerCount = std::move(*registerCount);
        if ( byteCount ) this->byteCount = std::move(*byteCount);
        if ( registerValues ) this->registerValues = std::move(*registerValues);
    }

    
    inline PDU::PDU() {
    }

    inline PDU::PDU(std::optional<std::optional<ModBus::ActionCode>> actionCode, std::optional<std::optional<hilti::rt::ValueReference<__hlt::ModBus::Data>>> rc, std::optional<std::optional<hilti::rt::ValueReference<__hlt::ModBus::Data>>> rdi, std::optional<std::optional<hilti::rt::ValueReference<__hlt::ModBus::Data>>> rhr, std::optional<std::optional<hilti::rt::ValueReference<__hlt::ModBus::Data>>> rir, std::optional<std::optional<hilti::rt::ValueReference<__hlt::ModBus::Data>>> wsc, std::optional<std::optional<hilti::rt::ValueReference<__hlt::ModBus::Data>>> wshr, std::optional<std::optional<hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>>> wmc, std::optional<std::optional<hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>>> wmhr) : PDU() {
        if ( actionCode ) this->actionCode = std::move(*actionCode);
        if ( rc ) this->rc = std::move(*rc);
        if ( rdi ) this->rdi = std::move(*rdi);
        if ( rhr ) this->rhr = std::move(*rhr);
        if ( rir ) this->rir = std::move(*rir);
        if ( wsc ) this->wsc = std::move(*wsc);
        if ( wshr ) this->wshr = std::move(*wshr);
        if ( wmc ) this->wmc = std::move(*wmc);
        if ( wmhr ) this->wmhr = std::move(*wmhr);
    }

    
    inline Request::Request() {
    }

    inline Request::Request(std::optional<std::optional<hilti::rt::Bytes>> transactionID, std::optional<std::optional<hilti::rt::Bytes>> protocolID, std::optional<std::optional<hilti::rt::Bytes>> length, std::optional<std::optional<hilti::rt::Bytes>> unitID, std::optional<std::optional<hilti::rt::ValueReference<__hlt::ModBus::PDU>>> pdu) : Request() {
        if ( transactionID ) this->transactionID = std::move(*transactionID);
        if ( protocolID ) this->protocolID = std::move(*protocolID);
        if ( length ) this->length = std::move(*length);
        if ( unitID ) this->unitID = std::move(*unitID);
        if ( pdu ) this->pdu = std::move(*pdu);
    }

    
}

HILTI_PRE_INIT(__hlt::ModBus::__register_module)

inline void __hlt::ModBus::Data::__on_0x25_done() {
    auto __self = ModBus::Data::__self();
    return __hlt::ModBus::__hook_Data___on_0x25_done(__self);
}

inline void __hlt::ModBus::Data::__on_0x25_error() {
    auto __self = ModBus::Data::__self();
    return __hlt::ModBus::__hook_Data___on_0x25_error(__self);
}

inline void __hlt::ModBus::Data::__on_0x25_finally() {
    auto __self = ModBus::Data::__self();
    return __hlt::ModBus::__hook_Data___on_0x25_finally(__self);
}

inline void __hlt::ModBus::Data::__on_0x25_init() {
    auto __self = ModBus::Data::__self();
    return __hlt::ModBus::__hook_Data___on_0x25_init(__self);
}

inline void __hlt::ModBus::Data::__on_address(const hilti::rt::integer::safe<int16_t>& __dd) {
    auto __self = ModBus::Data::__self();
    return __hlt::ModBus::__hook_Data___on_address(__dd, __self);
}

inline void __hlt::ModBus::Data::__on_count(const hilti::rt::integer::safe<int16_t>& __dd) {
    auto __self = ModBus::Data::__self();
    return __hlt::ModBus::__hook_Data___on_count(__dd, __self);
}

auto __hlt::ModBus::Data::__parse_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = Data::__self();
    hilti::rt::detail::checkStack();
    std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> __result;
    try {
        hilti::rt::debug::indent(std::string("spicy"));
          __location__("modbusv3.spicy:37:13-40:2");
        (*__self).__on_0x25_init();

        // Begin parsing production: Variable: address_3 -> int<16>;
        spicy::rt::detail::waitForInput(__data, __cur, hilti::rt::integer::safe<std::uint64_t>{2u}, std::string("expecting 2 bytes for unpacking value"), std::string("modbusv3.spicy:38:14"), hilti::rt::StrongReference<spicy::rt::filter::detail::Filters>());
        std::tie(hilti::rt::optional::valueOrInit((*__self).address), __cur) = hilti::rt::integer::unpack<int16_t>(__cur, hilti::rt::ByteOrder::Network).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: address_3 -> int<16>;

          __location__("modbusv3.spicy:38:5");
        (*__self).__on_address(hilti::rt::optional::value((*__self).address, "modbusv3.spicy:38:5"));

        // Begin parsing production: Variable: count_3 -> int<16>;
        spicy::rt::detail::waitForInput(__data, __cur, hilti::rt::integer::safe<std::uint64_t>{2u}, std::string("expecting 2 bytes for unpacking value"), std::string("modbusv3.spicy:39:12"), hilti::rt::StrongReference<spicy::rt::filter::detail::Filters>());
        std::tie(hilti::rt::optional::valueOrInit((*__self).count), __cur) = hilti::rt::integer::unpack<int16_t>(__cur, hilti::rt::ByteOrder::Network).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: count_3 -> int<16>;

          __location__("modbusv3.spicy:39:5");
        (*__self).__on_count(hilti::rt::optional::value((*__self).count, "modbusv3.spicy:38:5"));
          __location__("modbusv3.spicy:37:13-40:2");
        (*__self).__on_0x25_done();
        hilti::rt::debug::dedent(std::string("spicy"));
        __result = std::make_tuple(__cur, __lah, __lahe);
    }
    catch ( ... ) {
          __location__("modbusv3.spicy:37:13-40:2");
        (*__self).__on_0x25_error();
          __location__("modbusv3.spicy:37:13-40:2");
        (*__self).__on_0x25_finally();
        throw;
    }

      __location__("modbusv3.spicy:37:13-40:2");
    (*__self).__on_0x25_finally();
    return __result;
}

inline auto __hlt::ModBus::Data::__str__() -> std::optional<std::string> {
    auto __self = ModBus::Data::__self();
    return __hlt::ModBus::__hook_Data___str__(__self);
}

extern auto __hlt::ModBus::Data::parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View {
    hilti::rt::detail::checkStack();
    hilti::rt::ValueReference<__hlt::ModBus::Data> unit = hilti::rt::reference::make_value<__hlt::ModBus::Data>((__hlt::ModBus::Data()));
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: ModBus_Data_3 -> address_3 count_3;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: ModBus_Data_3 -> address_3 count_3;

    return ncur;
}

extern auto __hlt::ModBus::Data::parse2(hilti::rt::ValueReference<__hlt::ModBus::Data>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View {
    hilti::rt::detail::checkStack();
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: ModBus_Data_3 -> address_3 count_3;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: ModBus_Data_3 -> address_3 count_3;

    return ncur;
}

extern auto __hlt::ModBus::Data::parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View {
    hilti::rt::detail::checkStack();
    hilti::rt::ValueReference<__hlt::ModBus::Data> unit = hilti::rt::reference::make_value<__hlt::ModBus::Data>((__hlt::ModBus::Data()));
    spicy::rt::ParsedUnit::initialize((*gunit), unit, &type_info::__ti_ModBus_Data);
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: ModBus_Data_3 -> address_3 count_3;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: ModBus_Data_3 -> address_3 count_3;

    return ncur;
}

inline void __hlt::ModBus::DataWMC::__on_0x25_done() {
    auto __self = ModBus::DataWMC::__self();
    return __hlt::ModBus::__hook_DataWMC___on_0x25_done(__self);
}

inline void __hlt::ModBus::DataWMC::__on_0x25_error() {
    auto __self = ModBus::DataWMC::__self();
    return __hlt::ModBus::__hook_DataWMC___on_0x25_error(__self);
}

inline void __hlt::ModBus::DataWMC::__on_0x25_finally() {
    auto __self = ModBus::DataWMC::__self();
    return __hlt::ModBus::__hook_DataWMC___on_0x25_finally(__self);
}

inline void __hlt::ModBus::DataWMC::__on_0x25_init() {
    auto __self = ModBus::DataWMC::__self();
    return __hlt::ModBus::__hook_DataWMC___on_0x25_init(__self);
}

inline void __hlt::ModBus::DataWMC::__on_address(const hilti::rt::Bytes& __dd) {
    auto __self = ModBus::DataWMC::__self();
    return __hlt::ModBus::__hook_DataWMC___on_address(__dd, __self);
}

inline void __hlt::ModBus::DataWMC::__on_count(const hilti::rt::Bytes& __dd) {
    auto __self = ModBus::DataWMC::__self();
    return __hlt::ModBus::__hook_DataWMC___on_count(__dd, __self);
}

auto __hlt::ModBus::DataWMC::__parse_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = DataWMC::__self();
    hilti::rt::detail::checkStack();
    std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> __result;
    try {
        auto __ctor_1 = hilti::rt::StrongReference<spicy::rt::filter::detail::Filters>();auto __ctor_2 = hilti::rt::StrongReference<spicy::rt::filter::detail::Filters>();
        hilti::rt::debug::indent(std::string("spicy"));
          __location__("modbusv3.spicy:42:16-45:2");
        (*__self).__on_0x25_init();
        hilti::rt::stream::View __limited = __cur.limit(hilti::rt::integer::safe<std::uint64_t>{2u});
        hilti::rt::stream::View __ncur = __cur.advance(hilti::rt::integer::safe<std::uint64_t>{2u});

        // Begin parsing production: Variable: address_4 -> bytes;
        spicy::rt::detail::waitForEod(__data, __limited, __ctor_1);
        hilti::rt::optional::valueOrInit((*__self).address) = __limited.data();
        __limited = __limited.advance(__limited.size());
        if ( __trim ) {
            (*__data).trim(__limited.begin());
        }

        // End parsing production: Variable: address_4 -> bytes;

        if ( __limited.offset() != __ncur.offset() ) {
            (*__self).address.reset();
              __location__("modbusv3.spicy:43:20");
            throw spicy::rt::ParseError(std::string("&size amount not consumed"), "modbusv3.spicy:43:20");
        }

        __cur = __ncur;
          __location__("modbusv3.spicy:43:5");
        (*__self).__on_address(hilti::rt::optional::value((*__self).address, "modbusv3.spicy:43:5"));
        hilti::rt::stream::View __limited_2 = __cur.limit(hilti::rt::integer::safe<std::uint64_t>{2u});
        hilti::rt::stream::View __ncur_2 = __cur.advance(hilti::rt::integer::safe<std::uint64_t>{2u});

        // Begin parsing production: Variable: count_4 -> bytes;
        spicy::rt::detail::waitForEod(__data, __limited_2, __ctor_2);
        hilti::rt::optional::valueOrInit((*__self).count) = __limited_2.data();
        __limited_2 = __limited_2.advance(__limited_2.size());
        if ( __trim ) {
            (*__data).trim(__limited_2.begin());
        }

        // End parsing production: Variable: count_4 -> bytes;

        if ( __limited_2.offset() != __ncur_2.offset() ) {
            (*__self).count.reset();
              __location__("modbusv3.spicy:44:18");
            throw spicy::rt::ParseError(std::string("&size amount not consumed"), "modbusv3.spicy:44:18");
        }

        __cur = __ncur_2;
          __location__("modbusv3.spicy:44:5");
        (*__self).__on_count(hilti::rt::optional::value((*__self).count, "modbusv3.spicy:43:5"));
          __location__("modbusv3.spicy:42:16-45:2");
        (*__self).__on_0x25_done();
        hilti::rt::debug::dedent(std::string("spicy"));
        __result = std::make_tuple(__cur, __lah, __lahe);
    }
    catch ( ... ) {
          __location__("modbusv3.spicy:42:16-45:2");
        (*__self).__on_0x25_error();
          __location__("modbusv3.spicy:42:16-45:2");
        (*__self).__on_0x25_finally();
        throw;
    }

      __location__("modbusv3.spicy:42:16-45:2");
    (*__self).__on_0x25_finally();
    return __result;
}

inline auto __hlt::ModBus::DataWMC::__str__() -> std::optional<std::string> {
    auto __self = ModBus::DataWMC::__self();
    return __hlt::ModBus::__hook_DataWMC___str__(__self);
}

extern auto __hlt::ModBus::DataWMC::parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View {
    hilti::rt::detail::checkStack();
    hilti::rt::ValueReference<__hlt::ModBus::DataWMC> unit = hilti::rt::reference::make_value<__hlt::ModBus::DataWMC>((__hlt::ModBus::DataWMC()));
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: ModBus_DataWMC -> address_4 count_4;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: ModBus_DataWMC -> address_4 count_4;

    return ncur;
}

extern auto __hlt::ModBus::DataWMC::parse2(hilti::rt::ValueReference<__hlt::ModBus::DataWMC>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View {
    hilti::rt::detail::checkStack();
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: ModBus_DataWMC -> address_4 count_4;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: ModBus_DataWMC -> address_4 count_4;

    return ncur;
}

extern auto __hlt::ModBus::DataWMC::parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View {
    hilti::rt::detail::checkStack();
    hilti::rt::ValueReference<__hlt::ModBus::DataWMC> unit = hilti::rt::reference::make_value<__hlt::ModBus::DataWMC>((__hlt::ModBus::DataWMC()));
    spicy::rt::ParsedUnit::initialize((*gunit), unit, &type_info::__ti_ModBus_DataWMC);
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: ModBus_DataWMC -> address_4 count_4;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: ModBus_DataWMC -> address_4 count_4;

    return ncur;
}

inline void __hlt::ModBus::DataWMHR::__on_0x25_done() {
    auto __self = ModBus::DataWMHR::__self();
    return __hlt::ModBus::__hook_DataWMHR___on_0x25_done(__self);
}

inline void __hlt::ModBus::DataWMHR::__on_0x25_error() {
    auto __self = ModBus::DataWMHR::__self();
    return __hlt::ModBus::__hook_DataWMHR___on_0x25_error(__self);
}

inline void __hlt::ModBus::DataWMHR::__on_0x25_finally() {
    auto __self = ModBus::DataWMHR::__self();
    return __hlt::ModBus::__hook_DataWMHR___on_0x25_finally(__self);
}

inline void __hlt::ModBus::DataWMHR::__on_0x25_init() {
    auto __self = ModBus::DataWMHR::__self();
    return __hlt::ModBus::__hook_DataWMHR___on_0x25_init(__self);
}

inline void __hlt::ModBus::DataWMHR::__on_byteCount(const hilti::rt::integer::safe<uint8_t>& __dd) {
    auto __self = ModBus::DataWMHR::__self();
    return __hlt::ModBus::__hook_DataWMHR___on_byteCount(__dd, __self);
}

inline void __hlt::ModBus::DataWMHR::__on_registerAddress(const hilti::rt::integer::safe<uint16_t>& __dd) {
    auto __self = ModBus::DataWMHR::__self();
    return __hlt::ModBus::__hook_DataWMHR___on_registerAddress(__dd, __self);
}

inline void __hlt::ModBus::DataWMHR::__on_registerCount(const hilti::rt::integer::safe<uint16_t>& __dd) {
    auto __self = ModBus::DataWMHR::__self();
    return __hlt::ModBus::__hook_DataWMHR___on_registerCount(__dd, __self);
}

inline void __hlt::ModBus::DataWMHR::__on_registerValues(const hilti::rt::Vector<hilti::rt::integer::safe<uint16_t>>& __dd) {
    auto __self = ModBus::DataWMHR::__self();
    return __hlt::ModBus::__hook_DataWMHR___on_registerValues(__dd, __self);
}

inline void __hlt::ModBus::DataWMHR::__on_registerValues_foreach(const hilti::rt::integer::safe<uint16_t>& __dd, hilti::rt::Bool& __stop) {
    auto __self = ModBus::DataWMHR::__self();
    return __hlt::ModBus::__hook_DataWMHR___on_registerValues_foreach(__dd, __stop, __self);
}

auto __hlt::ModBus::DataWMHR::__parse_registerValues_3_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe, hilti::rt::Vector<hilti::rt::integer::safe<uint16_t>>& __dst) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = DataWMHR::__self();
    hilti::rt::detail::checkStack();
    std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> __result;
    for ( hilti::rt::integer::safe<uint64_t> __i = hilti::rt::integer::safe<uint64_t>(hilti::rt::optional::value((*__self).registerCount, "modbusv3.spicy:51:28")); static_cast<bool>(__i);  ) {
        __i--;
        hilti::rt::integer::safe<uint16_t> __elem;

        // Begin parsing production: Variable: uintx3016_3 -> uint<16> (container 'registerValues');
        spicy::rt::detail::waitForInput(__data, __cur, hilti::rt::integer::safe<std::uint64_t>{2u}, std::string("expecting 2 bytes for unpacking value"), std::string("modbusv3.spicy:51:21"), hilti::rt::StrongReference<spicy::rt::filter::detail::Filters>());
        std::tie(__elem, __cur) = hilti::rt::integer::unpack<uint16_t>(__cur, hilti::rt::ByteOrder::Network).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: uintx3016_3 -> uint<16> (container 'registerValues');

        hilti::rt::Bool __stop = hilti::rt::Bool(false);
        if ( ! (__stop) ) {
              __location__("modbusv3.spicy:51:5");
            (*__self).__on_registerValues_foreach(__elem, __stop);
        }

        if ( ! (__stop) ) {
            __dst.emplace_back(__elem);
        }

        if ( __stop ) {
            break;
        }
    }

    __result = std::make_tuple(__cur, __lah, __lahe);
    return __result;
}

auto __hlt::ModBus::DataWMHR::__parse_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = DataWMHR::__self();
    hilti::rt::detail::checkStack();
    std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> __result;
    try {
        hilti::rt::debug::indent(std::string("spicy"));
          __location__("modbusv3.spicy:47:17-52:2");
        (*__self).__on_0x25_init();

        // Begin parsing production: Variable: registerAddress_3 -> uint<16>;
        spicy::rt::detail::waitForInput(__data, __cur, hilti::rt::integer::safe<std::uint64_t>{2u}, std::string("expecting 2 bytes for unpacking value"), std::string("modbusv3.spicy:48:22"), hilti::rt::StrongReference<spicy::rt::filter::detail::Filters>());
        std::tie(hilti::rt::optional::valueOrInit((*__self).registerAddress), __cur) = hilti::rt::integer::unpack<uint16_t>(__cur, hilti::rt::ByteOrder::Network).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: registerAddress_3 -> uint<16>;

          __location__("modbusv3.spicy:48:5");
        (*__self).__on_registerAddress(hilti::rt::optional::value((*__self).registerAddress, "modbusv3.spicy:48:5"));

        // Begin parsing production: Variable: registerCount_3 -> uint<16>;
        spicy::rt::detail::waitForInput(__data, __cur, hilti::rt::integer::safe<std::uint64_t>{2u}, std::string("expecting 2 bytes for unpacking value"), std::string("modbusv3.spicy:49:20"), hilti::rt::StrongReference<spicy::rt::filter::detail::Filters>());
        std::tie(hilti::rt::optional::valueOrInit((*__self).registerCount), __cur) = hilti::rt::integer::unpack<uint16_t>(__cur, hilti::rt::ByteOrder::Network).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: registerCount_3 -> uint<16>;

          __location__("modbusv3.spicy:49:5");
        (*__self).__on_registerCount(hilti::rt::optional::value((*__self).registerCount, "modbusv3.spicy:48:5"));

        // Begin parsing production: Variable: byteCount_3 -> uint<8>;
        spicy::rt::detail::waitForInput(__data, __cur, hilti::rt::integer::safe<std::uint64_t>{1u}, std::string("expecting 1 bytes for unpacking value"), std::string("modbusv3.spicy:50:16"), hilti::rt::StrongReference<spicy::rt::filter::detail::Filters>());
        std::tie(hilti::rt::optional::valueOrInit((*__self).byteCount), __cur) = hilti::rt::integer::unpack<uint8_t>(__cur, hilti::rt::ByteOrder::Network).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }

        // End parsing production: Variable: byteCount_3 -> uint<8>;

          __location__("modbusv3.spicy:50:5");
        (*__self).__on_byteCount(hilti::rt::optional::value((*__self).byteCount, "modbusv3.spicy:48:5"));

        // Begin parsing production: Counter: registerValues_3 -> counter(self.registerCount): uintx3016_3;
        std::tie(__cur, __lah, __lahe) = (*__self).__parse_registerValues_3_stage1(__data, __cur, __trim, __lah, __lahe, hilti::rt::optional::valueOrInit((*__self).registerValues));
        // End parsing production: Counter: registerValues_3 -> counter(self.registerCount): uintx3016_3;

          __location__("modbusv3.spicy:51:5");
        (*__self).__on_registerValues(hilti::rt::optional::value((*__self).registerValues, "modbusv3.spicy:48:5"));
          __location__("modbusv3.spicy:47:17-52:2");
        (*__self).__on_0x25_done();
        hilti::rt::debug::dedent(std::string("spicy"));
        __result = std::make_tuple(__cur, __lah, __lahe);
    }
    catch ( ... ) {
          __location__("modbusv3.spicy:47:17-52:2");
        (*__self).__on_0x25_error();
          __location__("modbusv3.spicy:47:17-52:2");
        (*__self).__on_0x25_finally();
        throw;
    }

      __location__("modbusv3.spicy:47:17-52:2");
    (*__self).__on_0x25_finally();
    return __result;
}

inline auto __hlt::ModBus::DataWMHR::__str__() -> std::optional<std::string> {
    auto __self = ModBus::DataWMHR::__self();
    return __hlt::ModBus::__hook_DataWMHR___str__(__self);
}

extern auto __hlt::ModBus::DataWMHR::parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View {
    hilti::rt::detail::checkStack();
    hilti::rt::ValueReference<__hlt::ModBus::DataWMHR> unit = hilti::rt::reference::make_value<__hlt::ModBus::DataWMHR>((__hlt::ModBus::DataWMHR()));
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: ModBus_DataWMHR_3 -> registerAddress_3 registerCount_3 byteCount_3 registerValues_3;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: ModBus_DataWMHR_3 -> registerAddress_3 registerCount_3 byteCount_3 registerValues_3;

    return ncur;
}

extern auto __hlt::ModBus::DataWMHR::parse2(hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View {
    hilti::rt::detail::checkStack();
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: ModBus_DataWMHR_3 -> registerAddress_3 registerCount_3 byteCount_3 registerValues_3;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: ModBus_DataWMHR_3 -> registerAddress_3 registerCount_3 byteCount_3 registerValues_3;

    return ncur;
}

extern auto __hlt::ModBus::DataWMHR::parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View {
    hilti::rt::detail::checkStack();
    hilti::rt::ValueReference<__hlt::ModBus::DataWMHR> unit = hilti::rt::reference::make_value<__hlt::ModBus::DataWMHR>((__hlt::ModBus::DataWMHR()));
    spicy::rt::ParsedUnit::initialize((*gunit), unit, &type_info::__ti_ModBus_DataWMHR);
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: ModBus_DataWMHR_3 -> registerAddress_3 registerCount_3 byteCount_3 registerValues_3;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: ModBus_DataWMHR_3 -> registerAddress_3 registerCount_3 byteCount_3 registerValues_3;

    return ncur;
}

inline void __hlt::ModBus::PDU::__on_0x25_done() {
    auto __self = ModBus::PDU::__self();
    return __hlt::ModBus::__hook_PDU___on_0x25_done(__self);
}

inline void __hlt::ModBus::PDU::__on_0x25_error() {
    auto __self = ModBus::PDU::__self();
    return __hlt::ModBus::__hook_PDU___on_0x25_error(__self);
}

inline void __hlt::ModBus::PDU::__on_0x25_finally() {
    auto __self = ModBus::PDU::__self();
    return __hlt::ModBus::__hook_PDU___on_0x25_finally(__self);
}

inline void __hlt::ModBus::PDU::__on_0x25_init() {
    auto __self = ModBus::PDU::__self();
    return __hlt::ModBus::__hook_PDU___on_0x25_init(__self);
}

inline void __hlt::ModBus::PDU::__on_actionCode(const ModBus::ActionCode& __dd) {
    auto __self = ModBus::PDU::__self();
    return __hlt::ModBus::__hook_PDU___on_actionCode(__dd, __self);
}

inline void __hlt::ModBus::PDU::__on_rc(const hilti::rt::ValueReference<__hlt::ModBus::Data>& __dd) {
    auto __self = ModBus::PDU::__self();
    return __hlt::ModBus::__hook_PDU___on_rc(__dd, __self);
}

inline void __hlt::ModBus::PDU::__on_rdi(const hilti::rt::ValueReference<__hlt::ModBus::Data>& __dd) {
    auto __self = ModBus::PDU::__self();
    return __hlt::ModBus::__hook_PDU___on_rdi(__dd, __self);
}

inline void __hlt::ModBus::PDU::__on_rhr(const hilti::rt::ValueReference<__hlt::ModBus::Data>& __dd) {
    auto __self = ModBus::PDU::__self();
    return __hlt::ModBus::__hook_PDU___on_rhr(__dd, __self);
}

inline void __hlt::ModBus::PDU::__on_rir(const hilti::rt::ValueReference<__hlt::ModBus::Data>& __dd) {
    auto __self = ModBus::PDU::__self();
    return __hlt::ModBus::__hook_PDU___on_rir(__dd, __self);
}

inline void __hlt::ModBus::PDU::__on_wmc(const hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __dd) {
    auto __self = ModBus::PDU::__self();
    return __hlt::ModBus::__hook_PDU___on_wmc(__dd, __self);
}

inline void __hlt::ModBus::PDU::__on_wmhr(const hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& __dd) {
    auto __self = ModBus::PDU::__self();
    return __hlt::ModBus::__hook_PDU___on_wmhr(__dd, __self);
}

inline void __hlt::ModBus::PDU::__on_wsc(const hilti::rt::ValueReference<__hlt::ModBus::Data>& __dd) {
    auto __self = ModBus::PDU::__self();
    return __hlt::ModBus::__hook_PDU___on_wsc(__dd, __self);
}

inline void __hlt::ModBus::PDU::__on_wshr(const hilti::rt::ValueReference<__hlt::ModBus::Data>& __dd) {
    auto __self = ModBus::PDU::__self();
    return __hlt::ModBus::__hook_PDU___on_wshr(__dd, __self);
}

auto __hlt::ModBus::PDU::__parse_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = PDU::__self();
    hilti::rt::detail::checkStack();
    std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> __result;
    try {
        hilti::rt::debug::indent(std::string("spicy"));
          __location__("modbusv3.spicy:23:12-35:2");
        (*__self).__on_0x25_init();
        hilti::rt::integer::safe<int8_t> __parsed_actionCode;
        hilti::rt::stream::View __limited = __cur.limit(hilti::rt::integer::safe<std::uint64_t>{1u});
        hilti::rt::stream::View __ncur = __cur.advance(hilti::rt::integer::safe<std::uint64_t>{1u});

        // Begin parsing production: Variable: actionCode_2 -> int<8>;
        spicy::rt::detail::waitForInput(__data, __limited, hilti::rt::integer::safe<std::uint64_t>{1u}, std::string("expecting 1 bytes for unpacking value"), std::string("modbusv3.spicy:24:17"), hilti::rt::StrongReference<spicy::rt::filter::detail::Filters>());
        std::tie(__parsed_actionCode, __limited) = hilti::rt::integer::unpack<int8_t>(__limited, hilti::rt::ByteOrder::Network).valueOrThrow();
        if ( __trim ) {
            (*__data).trim(__limited.begin());
        }

        // End parsing production: Variable: actionCode_2 -> int<8>;

        if ( __limited.offset() != __ncur.offset() ) {
            (*__self).actionCode.reset();
              __location__("modbusv3.spicy:24:22");
            throw spicy::rt::ParseError(std::string("&size amount not consumed"), "modbusv3.spicy:24:22");
        }

        {
            hilti::rt::integer::safe<int8_t> __dd = __parsed_actionCode;
            hilti::rt::optional::valueOrInit((*__self).actionCode) = ::hilti::rt::enum_::from_int<ModBus::ActionCode>(__dd);
        }

        __cur = __ncur;
          __location__("modbusv3.spicy:24:5");
        (*__self).__on_actionCode(hilti::rt::optional::value((*__self).actionCode, "modbusv3.spicy:24:5"));

        // Begin parsing production: Switch: switch_2 -> [ActionCode::RC] -> switch_2_case_1 | [ActionCode::RDI] -> switch_2_case_2 | [ActionCode::RHR] -> switch_2_case_3 | [ActionCode::RIR] -> switch_2_case_4 | [ActionCode::WSC] -> switch_2_case_5 | [ActionCode::WSHR] -> switch_2_case_6 | [ActionCode::WMC] -> switch_2_case_7 | [ActionCode::WMHR] -> switch_2_case_8;
        std::tie(__cur, __lah, __lahe) = (*__self).__parse_switch_2_stage1(__data, __cur, __trim, __lah, __lahe, __self);
        // End parsing production: Switch: switch_2 -> [ActionCode::RC] -> switch_2_case_1 | [ActionCode::RDI] -> switch_2_case_2 | [ActionCode::RHR] -> switch_2_case_3 | [ActionCode::RIR] -> switch_2_case_4 | [ActionCode::WSC] -> switch_2_case_5 | [ActionCode::WSHR] -> switch_2_case_6 | [ActionCode::WMC] -> switch_2_case_7 | [ActionCode::WMHR] -> switch_2_case_8;

          __location__("modbusv3.spicy:23:12-35:2");
        (*__self).__on_0x25_done();
        hilti::rt::debug::dedent(std::string("spicy"));
        __result = std::make_tuple(__cur, __lah, __lahe);
    }
    catch ( ... ) {
          __location__("modbusv3.spicy:23:12-35:2");
        (*__self).__on_0x25_error();
          __location__("modbusv3.spicy:23:12-35:2");
        (*__self).__on_0x25_finally();
        throw;
    }

      __location__("modbusv3.spicy:23:12-35:2");
    (*__self).__on_0x25_finally();
    return __result;
}

auto __hlt::ModBus::PDU::__parse_switch_2_case_1_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __dst) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = PDU::__self();
    hilti::rt::detail::checkStack();
    std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> __result;

    // Begin parsing production: Unit: ModBus_Data_2 -> address_2 count_2;
    hilti::rt::optional::valueOrInit((*__self).rc) = (__hlt::ModBus::Data());
    std::tie(__cur, __lah, __lahe) = (*hilti::rt::optional::value((*__self).rc, "modbusv3.spicy:26:30")).__parse_stage1(__data, __cur, __trim, __lah, __lahe);
    // End parsing production: Unit: ModBus_Data_2 -> address_2 count_2;

      __location__("modbusv3.spicy:26:30");
    (*__self).__on_rc(hilti::rt::optional::value((*__self).rc, "modbusv3.spicy:26:30"));
    __result = std::make_tuple(__cur, __lah, __lahe);
    return __result;
}

auto __hlt::ModBus::PDU::__parse_switch_2_case_2_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __dst) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = PDU::__self();
    hilti::rt::detail::checkStack();
    std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> __result;

    // Begin parsing production: Unit: ModBus_Data_2 -> address_2 count_2;
    hilti::rt::optional::valueOrInit((*__self).rdi) = (__hlt::ModBus::Data());
    std::tie(__cur, __lah, __lahe) = (*hilti::rt::optional::value((*__self).rdi, "modbusv3.spicy:27:30")).__parse_stage1(__data, __cur, __trim, __lah, __lahe);
    // End parsing production: Unit: ModBus_Data_2 -> address_2 count_2;

      __location__("modbusv3.spicy:27:30");
    (*__self).__on_rdi(hilti::rt::optional::value((*__self).rdi, "modbusv3.spicy:27:30"));
    __result = std::make_tuple(__cur, __lah, __lahe);
    return __result;
}

auto __hlt::ModBus::PDU::__parse_switch_2_case_3_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __dst) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = PDU::__self();
    hilti::rt::detail::checkStack();
    std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> __result;

    // Begin parsing production: Unit: ModBus_Data_2 -> address_2 count_2;
    hilti::rt::optional::valueOrInit((*__self).rhr) = (__hlt::ModBus::Data());
    std::tie(__cur, __lah, __lahe) = (*hilti::rt::optional::value((*__self).rhr, "modbusv3.spicy:28:30")).__parse_stage1(__data, __cur, __trim, __lah, __lahe);
    // End parsing production: Unit: ModBus_Data_2 -> address_2 count_2;

      __location__("modbusv3.spicy:28:30");
    (*__self).__on_rhr(hilti::rt::optional::value((*__self).rhr, "modbusv3.spicy:28:30"));
    __result = std::make_tuple(__cur, __lah, __lahe);
    return __result;
}

auto __hlt::ModBus::PDU::__parse_switch_2_case_4_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __dst) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = PDU::__self();
    hilti::rt::detail::checkStack();
    std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> __result;

    // Begin parsing production: Unit: ModBus_Data_2 -> address_2 count_2;
    hilti::rt::optional::valueOrInit((*__self).rir) = (__hlt::ModBus::Data());
    std::tie(__cur, __lah, __lahe) = (*hilti::rt::optional::value((*__self).rir, "modbusv3.spicy:29:30")).__parse_stage1(__data, __cur, __trim, __lah, __lahe);
    // End parsing production: Unit: ModBus_Data_2 -> address_2 count_2;

      __location__("modbusv3.spicy:29:30");
    (*__self).__on_rir(hilti::rt::optional::value((*__self).rir, "modbusv3.spicy:29:30"));
    __result = std::make_tuple(__cur, __lah, __lahe);
    return __result;
}

auto __hlt::ModBus::PDU::__parse_switch_2_case_5_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __dst) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = PDU::__self();
    hilti::rt::detail::checkStack();
    std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> __result;

    // Begin parsing production: Unit: ModBus_Data_2 -> address_2 count_2;
    hilti::rt::optional::valueOrInit((*__self).wsc) = (__hlt::ModBus::Data());
    std::tie(__cur, __lah, __lahe) = (*hilti::rt::optional::value((*__self).wsc, "modbusv3.spicy:30:30")).__parse_stage1(__data, __cur, __trim, __lah, __lahe);
    // End parsing production: Unit: ModBus_Data_2 -> address_2 count_2;

      __location__("modbusv3.spicy:30:30");
    (*__self).__on_wsc(hilti::rt::optional::value((*__self).wsc, "modbusv3.spicy:30:30"));
    __result = std::make_tuple(__cur, __lah, __lahe);
    return __result;
}

auto __hlt::ModBus::PDU::__parse_switch_2_case_6_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __dst) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = PDU::__self();
    hilti::rt::detail::checkStack();
    std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> __result;

    // Begin parsing production: Unit: ModBus_Data_2 -> address_2 count_2;
    hilti::rt::optional::valueOrInit((*__self).wshr) = (__hlt::ModBus::Data());
    std::tie(__cur, __lah, __lahe) = (*hilti::rt::optional::value((*__self).wshr, "modbusv3.spicy:31:30")).__parse_stage1(__data, __cur, __trim, __lah, __lahe);
    // End parsing production: Unit: ModBus_Data_2 -> address_2 count_2;

      __location__("modbusv3.spicy:31:30");
    (*__self).__on_wshr(hilti::rt::optional::value((*__self).wshr, "modbusv3.spicy:31:30"));
    __result = std::make_tuple(__cur, __lah, __lahe);
    return __result;
}

auto __hlt::ModBus::PDU::__parse_switch_2_case_7_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __dst) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = PDU::__self();
    hilti::rt::detail::checkStack();
    std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> __result;

    // Begin parsing production: Unit: ModBus_DataWMHR_2 -> registerAddress_2 registerCount_2 byteCount_2 registerValues_2;
    hilti::rt::optional::valueOrInit((*__self).wmc) = (__hlt::ModBus::DataWMHR());
    std::tie(__cur, __lah, __lahe) = (*hilti::rt::optional::value((*__self).wmc, "modbusv3.spicy:32:30")).__parse_stage1(__data, __cur, __trim, __lah, __lahe);
    // End parsing production: Unit: ModBus_DataWMHR_2 -> registerAddress_2 registerCount_2 byteCount_2 registerValues_2;

      __location__("modbusv3.spicy:32:30");
    (*__self).__on_wmc(hilti::rt::optional::value((*__self).wmc, "modbusv3.spicy:32:30"));
    __result = std::make_tuple(__cur, __lah, __lahe);
    return __result;
}

auto __hlt::ModBus::PDU::__parse_switch_2_case_8_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __dst) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = PDU::__self();
    hilti::rt::detail::checkStack();
    std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> __result;

    // Begin parsing production: Unit: ModBus_DataWMHR_2 -> registerAddress_2 registerCount_2 byteCount_2 registerValues_2;
    hilti::rt::optional::valueOrInit((*__self).wmhr) = (__hlt::ModBus::DataWMHR());
    std::tie(__cur, __lah, __lahe) = (*hilti::rt::optional::value((*__self).wmhr, "modbusv3.spicy:33:30")).__parse_stage1(__data, __cur, __trim, __lah, __lahe);
    // End parsing production: Unit: ModBus_DataWMHR_2 -> registerAddress_2 registerCount_2 byteCount_2 registerValues_2;

      __location__("modbusv3.spicy:33:30");
    (*__self).__on_wmhr(hilti::rt::optional::value((*__self).wmhr, "modbusv3.spicy:33:30"));
    __result = std::make_tuple(__cur, __lah, __lahe);
    return __result;
}

auto __hlt::ModBus::PDU::__parse_switch_2_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe, hilti::rt::ValueReference<__hlt::ModBus::PDU>& __dst) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = PDU::__self();
    hilti::rt::detail::checkStack();
    std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> __result;
    hilti::rt::debug::indent(std::string("spicy"));
      __location__("modbusv3.spicy:25:5-34:7");
    if ( const auto __x = hilti::rt::optional::value((*__self).actionCode, "modbusv3.spicy:25:14"); __x == ModBus::ActionCode::RC ) {
          __location__("modbusv3.spicy:25:33-26:41");

        // Begin parsing production: Sequence: switch_2_case_1 -> ModBus_Data_2;
          __location__("modbusv3.spicy:25:33-26:41");
        std::tie(__cur, __lah, __lahe) = (*__self).__parse_switch_2_case_1_stage1(__data, __cur, __trim, __lah, __lahe, __dst);
          __location__("modbusv3.spicy:25:33-26:41");
        // End parsing production: Sequence: switch_2_case_1 -> ModBus_Data_2;
    }

    else if ( __x == ModBus::ActionCode::RDI ) {
          __location__("modbusv3.spicy:26:41-27:41");

        // Begin parsing production: Sequence: switch_2_case_2 -> ModBus_Data_2;
          __location__("modbusv3.spicy:26:41-27:41");
        std::tie(__cur, __lah, __lahe) = (*__self).__parse_switch_2_case_2_stage1(__data, __cur, __trim, __lah, __lahe, __dst);
          __location__("modbusv3.spicy:26:41-27:41");
        // End parsing production: Sequence: switch_2_case_2 -> ModBus_Data_2;
    }

    else if ( __x == ModBus::ActionCode::RHR ) {
          __location__("modbusv3.spicy:27:41-28:41");

        // Begin parsing production: Sequence: switch_2_case_3 -> ModBus_Data_2;
          __location__("modbusv3.spicy:27:41-28:41");
        std::tie(__cur, __lah, __lahe) = (*__self).__parse_switch_2_case_3_stage1(__data, __cur, __trim, __lah, __lahe, __dst);
          __location__("modbusv3.spicy:27:41-28:41");
        // End parsing production: Sequence: switch_2_case_3 -> ModBus_Data_2;
    }

    else if ( __x == ModBus::ActionCode::RIR ) {
          __location__("modbusv3.spicy:28:41-29:41");

        // Begin parsing production: Sequence: switch_2_case_4 -> ModBus_Data_2;
          __location__("modbusv3.spicy:28:41-29:41");
        std::tie(__cur, __lah, __lahe) = (*__self).__parse_switch_2_case_4_stage1(__data, __cur, __trim, __lah, __lahe, __dst);
          __location__("modbusv3.spicy:28:41-29:41");
        // End parsing production: Sequence: switch_2_case_4 -> ModBus_Data_2;
    }

    else if ( __x == ModBus::ActionCode::WSC ) {
          __location__("modbusv3.spicy:29:41-30:41");

        // Begin parsing production: Sequence: switch_2_case_5 -> ModBus_Data_2;
          __location__("modbusv3.spicy:29:41-30:41");
        std::tie(__cur, __lah, __lahe) = (*__self).__parse_switch_2_case_5_stage1(__data, __cur, __trim, __lah, __lahe, __dst);
          __location__("modbusv3.spicy:29:41-30:41");
        // End parsing production: Sequence: switch_2_case_5 -> ModBus_Data_2;
    }

    else if ( __x == ModBus::ActionCode::WSHR ) {
          __location__("modbusv3.spicy:30:41-31:41");

        // Begin parsing production: Sequence: switch_2_case_6 -> ModBus_Data_2;
          __location__("modbusv3.spicy:30:41-31:41");
        std::tie(__cur, __lah, __lahe) = (*__self).__parse_switch_2_case_6_stage1(__data, __cur, __trim, __lah, __lahe, __dst);
          __location__("modbusv3.spicy:30:41-31:41");
        // End parsing production: Sequence: switch_2_case_6 -> ModBus_Data_2;
    }

    else if ( __x == ModBus::ActionCode::WMC ) {
          __location__("modbusv3.spicy:31:41-32:45");

        // Begin parsing production: Sequence: switch_2_case_7 -> ModBus_DataWMHR_2;
          __location__("modbusv3.spicy:31:41-32:45");
        std::tie(__cur, __lah, __lahe) = (*__self).__parse_switch_2_case_7_stage1(__data, __cur, __trim, __lah, __lahe, __dst);
          __location__("modbusv3.spicy:31:41-32:45");
        // End parsing production: Sequence: switch_2_case_7 -> ModBus_DataWMHR_2;
    }

    else if ( __x == ModBus::ActionCode::WMHR ) {
          __location__("modbusv3.spicy:32:45-33:45");

        // Begin parsing production: Sequence: switch_2_case_8 -> ModBus_DataWMHR_2;
          __location__("modbusv3.spicy:32:45-33:45");
        std::tie(__cur, __lah, __lahe) = (*__self).__parse_switch_2_case_8_stage1(__data, __cur, __trim, __lah, __lahe, __dst);
          __location__("modbusv3.spicy:32:45-33:45");
        // End parsing production: Sequence: switch_2_case_8 -> ModBus_DataWMHR_2;
    }

    else  {
          __location__("modbusv3.spicy:25:5-34:7");
        throw spicy::rt::ParseError(std::string("no matching case in switch statement"), "modbusv3.spicy:25:5-34:7");
    }

    hilti::rt::debug::dedent(std::string("spicy"));
    __result = std::make_tuple(__cur, __lah, __lahe);
    return __result;
}

inline auto __hlt::ModBus::PDU::__str__() -> std::optional<std::string> {
    auto __self = ModBus::PDU::__self();
    return __hlt::ModBus::__hook_PDU___str__(__self);
}

extern auto __hlt::ModBus::PDU::parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View {
    hilti::rt::detail::checkStack();
    hilti::rt::ValueReference<__hlt::ModBus::PDU> unit = hilti::rt::reference::make_value<__hlt::ModBus::PDU>((__hlt::ModBus::PDU()));
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: ModBus_PDU_2 -> actionCode_2 switch_2;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: ModBus_PDU_2 -> actionCode_2 switch_2;

    return ncur;
}

extern auto __hlt::ModBus::PDU::parse2(hilti::rt::ValueReference<__hlt::ModBus::PDU>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View {
    hilti::rt::detail::checkStack();
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: ModBus_PDU_2 -> actionCode_2 switch_2;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: ModBus_PDU_2 -> actionCode_2 switch_2;

    return ncur;
}

extern auto __hlt::ModBus::PDU::parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View {
    hilti::rt::detail::checkStack();
    hilti::rt::ValueReference<__hlt::ModBus::PDU> unit = hilti::rt::reference::make_value<__hlt::ModBus::PDU>((__hlt::ModBus::PDU()));
    spicy::rt::ParsedUnit::initialize((*gunit), unit, &type_info::__ti_ModBus_PDU);
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: ModBus_PDU_2 -> actionCode_2 switch_2;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: ModBus_PDU_2 -> actionCode_2 switch_2;

    return ncur;
}

inline void __hlt::ModBus::Request::__on_0x25_done() {
    auto __self = ModBus::Request::__self();
    return __hlt::ModBus::__hook_Request___on_0x25_done(__self);
}

inline void __hlt::ModBus::Request::__on_0x25_error() {
    auto __self = ModBus::Request::__self();
    return __hlt::ModBus::__hook_Request___on_0x25_error(__self);
}

inline void __hlt::ModBus::Request::__on_0x25_finally() {
    auto __self = ModBus::Request::__self();
    return __hlt::ModBus::__hook_Request___on_0x25_finally(__self);
}

inline void __hlt::ModBus::Request::__on_0x25_gap(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::integer::safe<uint64_t>& len) {
    auto __self = ModBus::Request::__self();
    return __hlt::ModBus::__hook_Request___on_0x25_gap(seq, len, __self);
}

inline void __hlt::ModBus::Request::__on_0x25_init() {
    auto __self = ModBus::Request::__self();
    return __hlt::ModBus::__hook_Request___on_0x25_init(__self);
}

inline void __hlt::ModBus::Request::__on_0x25_overlap(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::Bytes& old, const hilti::rt::Bytes& new_) {
    auto __self = ModBus::Request::__self();
    return __hlt::ModBus::__hook_Request___on_0x25_overlap(seq, old, new_, __self);
}

inline void __hlt::ModBus::Request::__on_0x25_skipped(const hilti::rt::integer::safe<uint64_t>& seq) {
    auto __self = ModBus::Request::__self();
    return __hlt::ModBus::__hook_Request___on_0x25_skipped(seq, __self);
}

inline void __hlt::ModBus::Request::__on_0x25_undelivered(const hilti::rt::integer::safe<uint64_t>& seq, const hilti::rt::Bytes& data) {
    auto __self = ModBus::Request::__self();
    return __hlt::ModBus::__hook_Request___on_0x25_undelivered(seq, data, __self);
}

inline void __hlt::ModBus::Request::__on_length(const hilti::rt::Bytes& __dd) {
    auto __self = ModBus::Request::__self();
    return __hlt::ModBus::__hook_Request___on_length(__dd, __self);
}

inline void __hlt::ModBus::Request::__on_pdu(const hilti::rt::ValueReference<__hlt::ModBus::PDU>& __dd) {
    auto __self = ModBus::Request::__self();
    return __hlt::ModBus::__hook_Request___on_pdu(__dd, __self);
}

inline void __hlt::ModBus::Request::__on_protocolID(const hilti::rt::Bytes& __dd) {
    auto __self = ModBus::Request::__self();
    return __hlt::ModBus::__hook_Request___on_protocolID(__dd, __self);
}

inline void __hlt::ModBus::Request::__on_transactionID(const hilti::rt::Bytes& __dd) {
    auto __self = ModBus::Request::__self();
    return __hlt::ModBus::__hook_Request___on_transactionID(__dd, __self);
}

inline void __hlt::ModBus::Request::__on_unitID(const hilti::rt::Bytes& __dd) {
    auto __self = ModBus::Request::__self();
    return __hlt::ModBus::__hook_Request___on_unitID(__dd, __self);
}

auto __hlt::ModBus::Request::__parse_ModBus_Request_stage2(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = Request::__self();
    hilti::rt::detail::checkStack();
    std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> __result;
    hilti::rt::stream::View __limited = __cur.limit(hilti::rt::integer::safe<std::uint64_t>{2u});
    hilti::rt::stream::View __ncur = __cur.advance(hilti::rt::integer::safe<std::uint64_t>{2u});

    // Begin parsing production: Variable: transactionID -> bytes;
    spicy::rt::detail::waitForEod(__data, __limited, (*__self).__filters);
    hilti::rt::optional::valueOrInit((*__self).transactionID) = __limited.data();
    __limited = __limited.advance(__limited.size());
    if ( __trim ) {
        (*__data).trim(__limited.begin());
    }

    // End parsing production: Variable: transactionID -> bytes;

    if ( __limited.offset() != __ncur.offset() ) {
        (*__self).transactionID.reset();
          __location__("modbusv3.spicy:15:26");
        throw spicy::rt::ParseError(std::string("&size amount not consumed"), "modbusv3.spicy:15:26");
    }

    __cur = __ncur;
      __location__("modbusv3.spicy:15:5");
    (*__self).__on_transactionID(hilti::rt::optional::value((*__self).transactionID, "modbusv3.spicy:15:5"));
    hilti::rt::stream::View __limited_2 = __cur.limit(hilti::rt::integer::safe<std::uint64_t>{2u});
    hilti::rt::stream::View __ncur_2 = __cur.advance(hilti::rt::integer::safe<std::uint64_t>{2u});

    // Begin parsing production: Variable: protocolID -> bytes;
    spicy::rt::detail::waitForEod(__data, __limited_2, (*__self).__filters);
    hilti::rt::optional::valueOrInit((*__self).protocolID) = __limited_2.data();
    __limited_2 = __limited_2.advance(__limited_2.size());
    if ( __trim ) {
        (*__data).trim(__limited_2.begin());
    }

    // End parsing production: Variable: protocolID -> bytes;

    if ( __limited_2.offset() != __ncur_2.offset() ) {
        (*__self).protocolID.reset();
          __location__("modbusv3.spicy:16:23");
        throw spicy::rt::ParseError(std::string("&size amount not consumed"), "modbusv3.spicy:16:23");
    }

    __cur = __ncur_2;
      __location__("modbusv3.spicy:16:5");
    (*__self).__on_protocolID(hilti::rt::optional::value((*__self).protocolID, "modbusv3.spicy:15:5"));
    hilti::rt::stream::View __limited_3 = __cur.limit(hilti::rt::integer::safe<std::uint64_t>{2u});
    hilti::rt::stream::View __ncur_3 = __cur.advance(hilti::rt::integer::safe<std::uint64_t>{2u});

    // Begin parsing production: Variable: length -> bytes;
    spicy::rt::detail::waitForEod(__data, __limited_3, (*__self).__filters);
    hilti::rt::optional::valueOrInit((*__self).length) = __limited_3.data();
    __limited_3 = __limited_3.advance(__limited_3.size());
    if ( __trim ) {
        (*__data).trim(__limited_3.begin());
    }

    // End parsing production: Variable: length -> bytes;

    if ( __limited_3.offset() != __ncur_3.offset() ) {
        (*__self).length.reset();
          __location__("modbusv3.spicy:17:19");
        throw spicy::rt::ParseError(std::string("&size amount not consumed"), "modbusv3.spicy:17:19");
    }

    __cur = __ncur_3;
      __location__("modbusv3.spicy:17:5");
    (*__self).__on_length(hilti::rt::optional::value((*__self).length, "modbusv3.spicy:15:5"));
    hilti::rt::stream::View __limited_4 = __cur.limit(hilti::rt::integer::safe<std::uint64_t>{1u});
    hilti::rt::stream::View __ncur_4 = __cur.advance(hilti::rt::integer::safe<std::uint64_t>{1u});

    // Begin parsing production: Variable: unitID -> bytes;
    spicy::rt::detail::waitForEod(__data, __limited_4, (*__self).__filters);
    hilti::rt::optional::valueOrInit((*__self).unitID) = __limited_4.data();
    __limited_4 = __limited_4.advance(__limited_4.size());
    if ( __trim ) {
        (*__data).trim(__limited_4.begin());
    }

    // End parsing production: Variable: unitID -> bytes;

    if ( __limited_4.offset() != __ncur_4.offset() ) {
        (*__self).unitID.reset();
          __location__("modbusv3.spicy:18:19");
        throw spicy::rt::ParseError(std::string("&size amount not consumed"), "modbusv3.spicy:18:19");
    }

    __cur = __ncur_4;
      __location__("modbusv3.spicy:18:5");
    (*__self).__on_unitID(hilti::rt::optional::value((*__self).unitID, "modbusv3.spicy:15:5"));

    // Begin parsing production: Unit: ModBus_PDU -> actionCode switch;
    hilti::rt::optional::valueOrInit((*__self).pdu) = (__hlt::ModBus::PDU());
    std::tie(__cur, __lah, __lahe) = (*hilti::rt::optional::value((*__self).pdu, "modbusv3.spicy:15:5")).__parse_stage1(__data, __cur, __trim, __lah, __lahe);
    // End parsing production: Unit: ModBus_PDU -> actionCode switch;

      __location__("modbusv3.spicy:19:5");
    (*__self).__on_pdu(hilti::rt::optional::value((*__self).pdu, "modbusv3.spicy:15:5"));
      __location__("modbusv3.spicy:14:23-21:2");
    (*__self).__on_0x25_done();
    spicy::rt::filter::disconnect(__self);
    hilti::rt::debug::dedent(std::string("spicy"));
    __result = std::make_tuple(__cur, __lah, __lahe);
    return __result;
}

auto __hlt::ModBus::Request::__parse_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = Request::__self();
    hilti::rt::detail::checkStack();
    std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> __result;
    try {
        hilti::rt::debug::indent(std::string("spicy"));
          __location__("modbusv3.spicy:14:23-21:2");
        (*__self).__on_0x25_init();
        if ( hilti::rt::StrongReference<hilti::rt::Stream> filtered = spicy::rt::filter::init(__self, __data, __cur); static_cast<bool>(filtered) ) {
            hilti::rt::ValueReference<hilti::rt::Stream> filtered_data = filtered.derefAsValue();
            (*__self).__parse_ModBus_Request_stage2(filtered_data, (*filtered_data).view(), __trim, __lah, __lahe);
            __cur = __cur.advance(__cur.size());
            if ( __trim ) {
                (*__data).trim(__cur.begin());
            }

            __result = std::make_tuple(__cur, __lah, __lahe);
        }
        else {
            __result = (*__self).__parse_ModBus_Request_stage2(__data, __cur, __trim, __lah, __lahe);
        }
    }
    catch ( ... ) {
          __location__("modbusv3.spicy:14:23-21:2");
        (*__self).__on_0x25_error();
        spicy::rt::filter::disconnect(__self);
          __location__("modbusv3.spicy:14:23-21:2");
        (*__self).__on_0x25_finally();
        throw;
    }

      __location__("modbusv3.spicy:14:23-21:2");
    (*__self).__on_0x25_finally();
    return __result;
}

inline auto __hlt::ModBus::Request::__str__() -> std::optional<std::string> {
    auto __self = ModBus::Request::__self();
    return __hlt::ModBus::__hook_Request___str__(__self);
}

extern auto __hlt::ModBus::Request::parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View {
    hilti::rt::detail::checkStack();
    hilti::rt::ValueReference<__hlt::ModBus::Request> unit = hilti::rt::reference::make_value<__hlt::ModBus::Request>((__hlt::ModBus::Request()));
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: ModBus_Request -> transactionID protocolID length unitID ModBus_PDU;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: ModBus_Request -> transactionID protocolID length unitID ModBus_PDU;

    return ncur;
}

extern auto __hlt::ModBus::Request::parse2(hilti::rt::ValueReference<__hlt::ModBus::Request>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View {
    hilti::rt::detail::checkStack();
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: ModBus_Request -> transactionID protocolID length unitID ModBus_PDU;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: ModBus_Request -> transactionID protocolID length unitID ModBus_PDU;

    return ncur;
}

extern auto __hlt::ModBus::Request::parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View {
    hilti::rt::detail::checkStack();
    hilti::rt::ValueReference<__hlt::ModBus::Request> unit = hilti::rt::reference::make_value<__hlt::ModBus::Request>((__hlt::ModBus::Request()));
    spicy::rt::ParsedUnit::initialize((*gunit), unit, &type_info::__ti_ModBus_Request);
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: ModBus_Request -> transactionID protocolID length unitID ModBus_PDU;
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    // End parsing production: Unit: ModBus_Request -> transactionID protocolID length unitID ModBus_PDU;

    return ncur;
}

extern void __hlt::ModBus::__hook_Request___on_0x25_done_9e70(hilti::rt::ValueReference<Request>& __self) {
    hilti::rt::detail::checkStack();
      __location__("modbusv3.spicy:20:16");
    hilti::rt::print(__self, hilti::rt::Bool(true));
}

extern void __hlt::ModBus::__init_module() { __hlt::ModBus::__register_ModBus_Request(); }

extern void __hlt::ModBus::__register_ModBus_Request() {
    hilti::rt::detail::checkStack();
    ModBus::Request::__parser = spicy::rt::Parser(std::string("ModBus::Request"), hlt::ModBus::Request::parse1, hlt::ModBus::Request::parse2, hlt::ModBus::Request::parse3, hilti::rt::Null(), &type_info::__ti_ModBus_Request, std::string(""), hilti::rt::Vector<spicy::rt::MIMEType>({}), hilti::rt::Vector<spicy::rt::ParserPort>({}));
    spicy::rt::detail::registerParser(ModBus::Request::__parser, hilti::rt::linker_scope(), hilti::rt::StrongReference<__hlt::ModBus::Request>());
}

extern void __hlt::ModBus::__register_module() { hilti::rt::detail::registerModule({ "ModBus", &__init_module, nullptr, nullptr}); }

inline auto __hlt::ModBus::operator<<(std::ostream& o, ActionCode x) -> std::ostream& { o << hilti::rt::to_string(x); return o; }

static auto __hlt::ModBus::operator<<(std::ostream& o, const __hlt::ModBus::Request& x) -> std::ostream& { o << hilti::rt::to_string(x); return o; }

static auto __hlt::ModBus::operator<<(std::ostream& o, const __hlt::ModBus::PDU& x) -> std::ostream& { o << hilti::rt::to_string(x); return o; }

static auto __hlt::ModBus::operator<<(std::ostream& o, const __hlt::ModBus::Data& x) -> std::ostream& { o << hilti::rt::to_string(x); return o; }

static auto __hlt::ModBus::operator<<(std::ostream& o, const __hlt::ModBus::DataWMC& x) -> std::ostream& { o << hilti::rt::to_string(x); return o; }

static auto __hlt::ModBus::operator<<(std::ostream& o, const __hlt::ModBus::DataWMHR& x) -> std::ostream& { o << hilti::rt::to_string(x); return o; }

inline auto hilti::rt::detail::adl::to_string(__hlt::ModBus::ActionCode x, adl::tag) -> std::string {
    switch ( x ) {
        case __hlt::ModBus::ActionCode::WMHR: 
            return "ActionCode::WMHR";
        case __hlt::ModBus::ActionCode::WMC: 
            return "ActionCode::WMC";
        case __hlt::ModBus::ActionCode::WSHR: 
            return "ActionCode::WSHR";
        case __hlt::ModBus::ActionCode::WSC: 
            return "ActionCode::WSC";
        case __hlt::ModBus::ActionCode::RIR: 
            return "ActionCode::RIR";
        case __hlt::ModBus::ActionCode::RHR: 
            return "ActionCode::RHR";
        case __hlt::ModBus::ActionCode::RDI: 
            return "ActionCode::RDI";
        case __hlt::ModBus::ActionCode::RC: 
            return "ActionCode::RC";
        case __hlt::ModBus::ActionCode::Undef: 
            return "ActionCode::Undef";
        default: 
            return hilti::rt::fmt("ActionCode::<unknown-%" PRIu64 ">", static_cast<uint64_t>(x));
    }
}

extern auto hlt::ModBus::Data::parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt::ModBus::Data::parse1(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt::ModBus::Data::parse2(hilti::rt::ValueReference<__hlt::ModBus::Data>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(unit), ::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt::ModBus::Data::parse2(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt::ModBus::Data::parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(gunit), ::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt::ModBus::Data::parse3(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt::ModBus::DataWMC::parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt::ModBus::DataWMC::parse1(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt::ModBus::DataWMC::parse2(hilti::rt::ValueReference<__hlt::ModBus::DataWMC>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(unit), ::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt::ModBus::DataWMC::parse2(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt::ModBus::DataWMC::parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(gunit), ::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt::ModBus::DataWMC::parse3(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt::ModBus::DataWMHR::parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt::ModBus::DataWMHR::parse1(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt::ModBus::DataWMHR::parse2(hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(unit), ::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt::ModBus::DataWMHR::parse2(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt::ModBus::DataWMHR::parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(gunit), ::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt::ModBus::DataWMHR::parse3(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt::ModBus::PDU::parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt::ModBus::PDU::parse1(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt::ModBus::PDU::parse2(hilti::rt::ValueReference<__hlt::ModBus::PDU>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(unit), ::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt::ModBus::PDU::parse2(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt::ModBus::PDU::parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(gunit), ::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt::ModBus::PDU::parse3(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt::ModBus::Request::parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt::ModBus::Request::parse1(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt::ModBus::Request::parse2(hilti::rt::ValueReference<__hlt::ModBus::Request>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(unit), ::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt::ModBus::Request::parse2(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt::ModBus::Request::parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(gunit), ::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt::ModBus::Request::parse3(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

/* __HILTI_LINKER_V1__
{"joins":{"__hlt::ModBus::__hook_DataWMC___on_0x25_done":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::DataWMC","type":"struct DataWMC"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::DataWMC>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_0x25_done","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_DataWMC___on_0x25_done","priority":0}],"__hlt::ModBus::__hook_DataWMC___on_0x25_error":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::DataWMC","type":"struct DataWMC"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::DataWMC>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_0x25_error","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_DataWMC___on_0x25_error","priority":0}],"__hlt::ModBus::__hook_DataWMC___on_0x25_finally":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::DataWMC","type":"struct DataWMC"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::DataWMC>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_0x25_finally","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_DataWMC___on_0x25_finally","priority":0}],"__hlt::ModBus::__hook_DataWMC___on_0x25_init":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::DataWMC","type":"struct DataWMC"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::DataWMC>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_0x25_init","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_DataWMC___on_0x25_init","priority":0}],"__hlt::ModBus::__hook_DataWMC___on_address":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::DataWMC","type":"struct DataWMC"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::Bytes&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::DataWMC>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_address","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_DataWMC___on_address","priority":0}],"__hlt::ModBus::__hook_DataWMC___on_count":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::DataWMC","type":"struct DataWMC"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::Bytes&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::DataWMC>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_count","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_DataWMC___on_count","priority":0}],"__hlt::ModBus::__hook_DataWMC___str__":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::DataWMC","type":"struct DataWMC"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::DataWMC>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__str__","linkage":"","result":"std::optional<std::string>"},"declare_only":true,"id":"__hlt::ModBus::__hook_DataWMC___str__","priority":0}],"__hlt::ModBus::__hook_DataWMHR___on_0x25_done":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::DataWMHR","type":"struct DataWMHR"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_0x25_done","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_DataWMHR___on_0x25_done","priority":0}],"__hlt::ModBus::__hook_DataWMHR___on_0x25_error":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::DataWMHR","type":"struct DataWMHR"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_0x25_error","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_DataWMHR___on_0x25_error","priority":0}],"__hlt::ModBus::__hook_DataWMHR___on_0x25_finally":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::DataWMHR","type":"struct DataWMHR"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_0x25_finally","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_DataWMHR___on_0x25_finally","priority":0}],"__hlt::ModBus::__hook_DataWMHR___on_0x25_init":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::DataWMHR","type":"struct DataWMHR"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_0x25_init","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_DataWMHR___on_0x25_init","priority":0}],"__hlt::ModBus::__hook_DataWMHR___on_byteCount":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::DataWMHR","type":"struct DataWMHR"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::integer::safe<uint8_t>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_byteCount","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_DataWMHR___on_byteCount","priority":0}],"__hlt::ModBus::__hook_DataWMHR___on_registerAddress":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::DataWMHR","type":"struct DataWMHR"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::integer::safe<uint16_t>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_registerAddress","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_DataWMHR___on_registerAddress","priority":0}],"__hlt::ModBus::__hook_DataWMHR___on_registerCount":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::DataWMHR","type":"struct DataWMHR"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::integer::safe<uint16_t>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_registerCount","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_DataWMHR___on_registerCount","priority":0}],"__hlt::ModBus::__hook_DataWMHR___on_registerValues":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::DataWMHR","type":"struct DataWMHR"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::Vector<hilti::rt::integer::safe<uint16_t>>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_registerValues","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_DataWMHR___on_registerValues","priority":0}],"__hlt::ModBus::__hook_DataWMHR___on_registerValues_foreach":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::DataWMHR","type":"struct DataWMHR"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::integer::safe<uint16_t>&"},{"id":"__stop","type":"hilti::rt::Bool&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_registerValues_foreach","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_DataWMHR___on_registerValues_foreach","priority":0}],"__hlt::ModBus::__hook_DataWMHR___str__":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::DataWMHR","type":"struct DataWMHR"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__str__","linkage":"","result":"std::optional<std::string>"},"declare_only":true,"id":"__hlt::ModBus::__hook_DataWMHR___str__","priority":0}],"__hlt::ModBus::__hook_Data___on_0x25_done":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::Data","type":"struct Data"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::Data>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_0x25_done","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_Data___on_0x25_done","priority":0}],"__hlt::ModBus::__hook_Data___on_0x25_error":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::Data","type":"struct Data"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::Data>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_0x25_error","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_Data___on_0x25_error","priority":0}],"__hlt::ModBus::__hook_Data___on_0x25_finally":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::Data","type":"struct Data"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::Data>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_0x25_finally","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_Data___on_0x25_finally","priority":0}],"__hlt::ModBus::__hook_Data___on_0x25_init":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::Data","type":"struct Data"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::Data>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_0x25_init","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_Data___on_0x25_init","priority":0}],"__hlt::ModBus::__hook_Data___on_address":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::Data","type":"struct Data"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::integer::safe<int16_t>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::Data>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_address","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_Data___on_address","priority":0}],"__hlt::ModBus::__hook_Data___on_count":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::Data","type":"struct Data"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::integer::safe<int16_t>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::Data>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_count","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_Data___on_count","priority":0}],"__hlt::ModBus::__hook_Data___str__":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::Data","type":"struct Data"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::Data>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__str__","linkage":"","result":"std::optional<std::string>"},"declare_only":true,"id":"__hlt::ModBus::__hook_Data___str__","priority":0}],"__hlt::ModBus::__hook_PDU___on_0x25_done":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::PDU","type":"struct PDU"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::PDU>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_0x25_done","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_PDU___on_0x25_done","priority":0}],"__hlt::ModBus::__hook_PDU___on_0x25_error":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::PDU","type":"struct PDU"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::PDU>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_0x25_error","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_PDU___on_0x25_error","priority":0}],"__hlt::ModBus::__hook_PDU___on_0x25_finally":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::PDU","type":"struct PDU"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::PDU>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_0x25_finally","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_PDU___on_0x25_finally","priority":0}],"__hlt::ModBus::__hook_PDU___on_0x25_init":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::PDU","type":"struct PDU"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::PDU>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_0x25_init","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_PDU___on_0x25_init","priority":0}],"__hlt::ModBus::__hook_PDU___on_actionCode":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::PDU","type":"struct PDU"},{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::ActionCode","type":"enum class ActionCode : int64_t { RC = 1, RDI = 2, RHR = 3, RIR = 4, WSC = 5, WSHR = 6, WMC = 15, WMHR = 16, Undef = -1 }"}],"callee":{"args":[{"id":"__dd","type":"const ModBus::ActionCode&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::PDU>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_actionCode","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_PDU___on_actionCode","priority":0}],"__hlt::ModBus::__hook_PDU___on_rc":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::PDU","type":"struct PDU"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::ValueReference<__hlt::ModBus::Data>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::PDU>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_rc","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_PDU___on_rc","priority":0}],"__hlt::ModBus::__hook_PDU___on_rdi":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::PDU","type":"struct PDU"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::ValueReference<__hlt::ModBus::Data>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::PDU>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_rdi","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_PDU___on_rdi","priority":0}],"__hlt::ModBus::__hook_PDU___on_rhr":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::PDU","type":"struct PDU"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::ValueReference<__hlt::ModBus::Data>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::PDU>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_rhr","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_PDU___on_rhr","priority":0}],"__hlt::ModBus::__hook_PDU___on_rir":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::PDU","type":"struct PDU"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::ValueReference<__hlt::ModBus::Data>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::PDU>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_rir","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_PDU___on_rir","priority":0}],"__hlt::ModBus::__hook_PDU___on_wmc":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::PDU","type":"struct PDU"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::PDU>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_wmc","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_PDU___on_wmc","priority":0}],"__hlt::ModBus::__hook_PDU___on_wmhr":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::PDU","type":"struct PDU"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::ValueReference<__hlt::ModBus::DataWMHR>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::PDU>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_wmhr","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_PDU___on_wmhr","priority":0}],"__hlt::ModBus::__hook_PDU___on_wsc":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::PDU","type":"struct PDU"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::ValueReference<__hlt::ModBus::Data>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::PDU>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_wsc","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_PDU___on_wsc","priority":0}],"__hlt::ModBus::__hook_PDU___on_wshr":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::PDU","type":"struct PDU"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::ValueReference<__hlt::ModBus::Data>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::PDU>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_wshr","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_PDU___on_wshr","priority":0}],"__hlt::ModBus::__hook_PDU___str__":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::PDU","type":"struct PDU"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::PDU>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__str__","linkage":"","result":"std::optional<std::string>"},"declare_only":true,"id":"__hlt::ModBus::__hook_PDU___str__","priority":0}],"__hlt::ModBus::__hook_Request___on_0x25_done":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::Request","type":"struct Request"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<Request>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__hook_Request___on_0x25_done_9e70","linkage":"extern","result":"void"},"declare_only":false,"id":"__hlt::ModBus::__hook_Request___on_0x25_done","priority":0},{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::Request","type":"struct Request"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::Request>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_0x25_done","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_Request___on_0x25_done","priority":0}],"__hlt::ModBus::__hook_Request___on_0x25_error":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::Request","type":"struct Request"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::Request>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_0x25_error","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_Request___on_0x25_error","priority":0}],"__hlt::ModBus::__hook_Request___on_0x25_finally":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::Request","type":"struct Request"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::Request>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_0x25_finally","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_Request___on_0x25_finally","priority":0}],"__hlt::ModBus::__hook_Request___on_0x25_gap":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::Request","type":"struct Request"}],"callee":{"args":[{"id":"seq","type":"const hilti::rt::integer::safe<uint64_t>&"},{"id":"len","type":"const hilti::rt::integer::safe<uint64_t>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::Request>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_0x25_gap","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_Request___on_0x25_gap","priority":0}],"__hlt::ModBus::__hook_Request___on_0x25_init":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::Request","type":"struct Request"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::Request>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_0x25_init","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_Request___on_0x25_init","priority":0}],"__hlt::ModBus::__hook_Request___on_0x25_overlap":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::Request","type":"struct Request"}],"callee":{"args":[{"id":"seq","type":"const hilti::rt::integer::safe<uint64_t>&"},{"id":"old","type":"const hilti::rt::Bytes&"},{"id":"new_","type":"const hilti::rt::Bytes&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::Request>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_0x25_overlap","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_Request___on_0x25_overlap","priority":0}],"__hlt::ModBus::__hook_Request___on_0x25_skipped":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::Request","type":"struct Request"}],"callee":{"args":[{"id":"seq","type":"const hilti::rt::integer::safe<uint64_t>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::Request>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_0x25_skipped","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_Request___on_0x25_skipped","priority":0}],"__hlt::ModBus::__hook_Request___on_0x25_undelivered":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::Request","type":"struct Request"}],"callee":{"args":[{"id":"seq","type":"const hilti::rt::integer::safe<uint64_t>&"},{"id":"data","type":"const hilti::rt::Bytes&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::Request>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_0x25_undelivered","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_Request___on_0x25_undelivered","priority":0}],"__hlt::ModBus::__hook_Request___on_length":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::Request","type":"struct Request"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::Bytes&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::Request>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_length","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_Request___on_length","priority":0}],"__hlt::ModBus::__hook_Request___on_pdu":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::Request","type":"struct Request"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::ValueReference<__hlt::ModBus::PDU>&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::Request>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_pdu","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_Request___on_pdu","priority":0}],"__hlt::ModBus::__hook_Request___on_protocolID":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::Request","type":"struct Request"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::Bytes&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::Request>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_protocolID","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_Request___on_protocolID","priority":0}],"__hlt::ModBus::__hook_Request___on_transactionID":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::Request","type":"struct Request"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::Bytes&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::Request>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_transactionID","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_Request___on_transactionID","priority":0}],"__hlt::ModBus::__hook_Request___on_unitID":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::Request","type":"struct Request"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::Bytes&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::Request>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__on_unitID","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::ModBus::__hook_Request___on_unitID","priority":0}],"__hlt::ModBus::__hook_Request___str__":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::ModBus::Request","type":"struct Request"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::ModBus::Request>&"}],"attribute":"","const":false,"id":"__hlt::ModBus::__str__","linkage":"","result":"std::optional<std::string>"},"declare_only":true,"id":"__hlt::ModBus::__hook_Request___str__","priority":0}]},"module":"ModBus","namespace":"__hlt::ModBus","path":"/home/solawep/internship/HardenedModbusParser/modbusv3.spicy","version":1}
*/

