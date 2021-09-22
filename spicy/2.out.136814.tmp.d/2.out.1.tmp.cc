// Begin of filter (from "/opt/spicy/share/spicy/filter.spicy")
// Compiled by HILTI version 1.2.0

#include <hilti/rt/compiler-setup.h>

#include <hilti/rt/libhilti.h>
#include <spicy/rt/libspicy.h>

namespace __hlt::filter {
    struct Base64Decode;
    struct Zlib;
}

namespace __hlt::type_info { namespace {
    extern const hilti::rt::TypeInfo __ti_filter_Base64Decode;
    extern const hilti::rt::TypeInfo __ti_filter_Zlib;
    extern const hilti::rt::TypeInfo __ti_spicy_Base64Stream;
    extern const hilti::rt::TypeInfo __ti_spicy_ZlibStream;
    extern const hilti::rt::TypeInfo __ti_spicy_rt_Forward;
    extern const hilti::rt::TypeInfo __ti_weak_refx30spicy_rt_Forward;
} }

namespace __hlt::filter {
    struct Zlib : hilti::rt::trait::isStruct, hilti::rt::trait::hasParameters, hilti::rt::Controllable<Zlib> {
        inline auto __self() { return hilti::rt::ValueReference<Zlib>::self(this); }
        void __on_anon(const hilti::rt::Bytes& __dd);
        spicy::rt::zlib::Stream z{};
        void __on_0x25_init();
        void __on_0x25_done();
        void __on_0x25_error();
        auto __str__() -> std::optional<std::string>;
        void __on_0x25_finally();
        inline static spicy::rt::Parser __parser{};
        hilti::rt::WeakReference<spicy::rt::filter::detail::Forward> __forward{};
        auto __parse_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        static auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context, const std::optional<hilti::rt::integer::safe<int64_t>>& window_bits) -> hilti::rt::stream::View;
        static auto parse2(hilti::rt::ValueReference<Zlib>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View;
        static auto parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View;
        std::optional<hilti::rt::integer::safe<int64_t>> __p_window_bits;
        inline Zlib();
        Zlib(const Zlib&) = default;
        Zlib(Zlib&&) = default;
        Zlib& operator=(const Zlib&) = default;
        Zlib& operator=(Zlib&&) = default;
        inline Zlib(std::optional<spicy::rt::zlib::Stream> z);
        inline Zlib(const std::optional<hilti::rt::integer::safe<int64_t>>& __p_window_bits);
        template<typename F> void __visit(F _) const { _("z", z); }
    };

    struct Base64Decode : hilti::rt::trait::isStruct, hilti::rt::Controllable<Base64Decode> {
        inline auto __self() { return hilti::rt::ValueReference<Base64Decode>::self(this); }
        void __on_anon_2(const hilti::rt::Bytes& __dd);
        spicy::rt::base64::Stream z{};
        void __on_0x25_init();
        void __on_0x25_done();
        void __on_0x25_error();
        auto __str__() -> std::optional<std::string>;
        void __on_0x25_finally();
        inline static spicy::rt::Parser __parser{};
        hilti::rt::WeakReference<spicy::rt::filter::detail::Forward> __forward{};
        auto __parse_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator>;
        static auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View;
        static auto parse2(hilti::rt::ValueReference<Base64Decode>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View;
        static auto parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View;
        inline Base64Decode();
        Base64Decode(const Base64Decode&) = default;
        Base64Decode(Base64Decode&&) = default;
        Base64Decode& operator=(const Base64Decode&) = default;
        Base64Decode& operator=(Base64Decode&&) = default;
        inline Base64Decode(std::optional<spicy::rt::base64::Stream> z);
        template<typename F> void __visit(F _) const { _("z", z); }
    };

    extern void __hook_Base64Decode___on_0x25_done(hilti::rt::ValueReference<Base64Decode>& __self);
    extern void __hook_Base64Decode___on_0x25_done(hilti::rt::ValueReference<__hlt::filter::Base64Decode>& __self);
    extern void __hook_Base64Decode___on_0x25_done_6b98(hilti::rt::ValueReference<Base64Decode>& __self);
    extern void __hook_Base64Decode___on_0x25_error(hilti::rt::ValueReference<__hlt::filter::Base64Decode>& __self);
    extern void __hook_Base64Decode___on_0x25_finally(hilti::rt::ValueReference<__hlt::filter::Base64Decode>& __self);
    extern void __hook_Base64Decode___on_0x25_init(hilti::rt::ValueReference<__hlt::filter::Base64Decode>& __self);
    extern void __hook_Base64Decode___on_anon_2(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<Base64Decode>& __self);
    extern void __hook_Base64Decode___on_anon_2(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::filter::Base64Decode>& __self);
    extern void __hook_Base64Decode___on_anon_2_bbf6(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<Base64Decode>& __self);
    extern auto __hook_Base64Decode___str__(hilti::rt::ValueReference<__hlt::filter::Base64Decode>& __self) -> std::optional<std::string>;
    extern void __hook_Zlib___on_0x25_done(hilti::rt::ValueReference<Zlib>& __self);
    extern void __hook_Zlib___on_0x25_done(hilti::rt::ValueReference<__hlt::filter::Zlib>& __self);
    extern void __hook_Zlib___on_0x25_done_7c7b(hilti::rt::ValueReference<Zlib>& __self);
    extern void __hook_Zlib___on_0x25_error(hilti::rt::ValueReference<__hlt::filter::Zlib>& __self);
    extern void __hook_Zlib___on_0x25_finally(hilti::rt::ValueReference<__hlt::filter::Zlib>& __self);
    extern void __hook_Zlib___on_0x25_init(hilti::rt::ValueReference<Zlib>& __self);
    extern void __hook_Zlib___on_0x25_init(hilti::rt::ValueReference<__hlt::filter::Zlib>& __self);
    extern void __hook_Zlib___on_0x25_init_40ab(hilti::rt::ValueReference<Zlib>& __self);
    extern void __hook_Zlib___on_anon(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<Zlib>& __self);
    extern void __hook_Zlib___on_anon(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<__hlt::filter::Zlib>& __self);
    extern void __hook_Zlib___on_anon_e3c5(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<Zlib>& __self);
    extern auto __hook_Zlib___str__(hilti::rt::ValueReference<__hlt::filter::Zlib>& __self) -> std::optional<std::string>;
    extern void __init_module();
    extern void __register_filter_Base64Decode();
    extern void __register_filter_Zlib();
    extern void __register_module();
    static auto operator<<(std::ostream& o, const __hlt::filter::Zlib& x) -> std::ostream&;
    static auto operator<<(std::ostream& o, const __hlt::filter::Base64Decode& x) -> std::ostream&;
}

namespace hlt::filter::Base64Decode {
    extern auto parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable;
    extern auto parse2(hilti::rt::ValueReference<__hlt::filter::Base64Decode>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable;
    extern auto parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable;
}

namespace hlt::filter::Zlib {
    extern auto parse2(hilti::rt::ValueReference<__hlt::filter::Zlib>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable;
}

namespace __hlt::type_info { namespace {
    const hilti::rt::TypeInfo __ti_filter_Base64Decode = { "filter::Base64Decode", "filter::Base64Decode", new hilti::rt::type_info::Struct(std::vector<hilti::rt::type_info::struct_::Field>({hilti::rt::type_info::struct_::Field{ "z", &type_info::__ti_spicy_Base64Stream, offsetof(filter::Base64Decode, z), false }, hilti::rt::type_info::struct_::Field{ "__forward", &type_info::__ti_weak_refx30spicy_rt_Forward, offsetof(filter::Base64Decode, __forward), true }})) };
    const hilti::rt::TypeInfo __ti_filter_Zlib = { "filter::Zlib", "filter::Zlib", new hilti::rt::type_info::Struct(std::vector<hilti::rt::type_info::struct_::Field>({hilti::rt::type_info::struct_::Field{ "z", &type_info::__ti_spicy_ZlibStream, offsetof(filter::Zlib, z), false }, hilti::rt::type_info::struct_::Field{ "__forward", &type_info::__ti_weak_refx30spicy_rt_Forward, offsetof(filter::Zlib, __forward), true }})) };
    const hilti::rt::TypeInfo __ti_spicy_Base64Stream = { "spicy::Base64Stream", "spicy::Base64Stream", new hilti::rt::type_info::Library() };
    const hilti::rt::TypeInfo __ti_spicy_ZlibStream = { "spicy::ZlibStream", "spicy::ZlibStream", new hilti::rt::type_info::Library() };
    const hilti::rt::TypeInfo __ti_spicy_rt_Forward = { "spicy_rt::Forward", "spicy_rt::Forward", new hilti::rt::type_info::Library() };
    const hilti::rt::TypeInfo __ti_weak_refx30spicy_rt_Forward = { {}, "weak_ref<spicy_rt::Forward>", new hilti::rt::type_info::WeakReference(&type_info::__ti_spicy_rt_Forward, hilti::rt::type_info::WeakReference::accessor<spicy::rt::filter::detail::Forward>()) };
} }

namespace __hlt::filter {
    inline Base64Decode::Base64Decode() {
    }

    inline Base64Decode::Base64Decode(std::optional<spicy::rt::base64::Stream> z) : Base64Decode() {
        if ( z ) this->z = std::move(*z);
    }

    
    inline Zlib::Zlib() {
        __p_window_bits = std::optional<hilti::rt::integer::safe<int64_t>>();
    }

    inline Zlib::Zlib(const std::optional<hilti::rt::integer::safe<int64_t>>& __p_window_bits) : __p_window_bits(std::move(__p_window_bits)) {
    }

    inline Zlib::Zlib(std::optional<spicy::rt::zlib::Stream> z) : Zlib() {
        if ( z ) this->z = std::move(*z);
    }

    
}

HILTI_PRE_INIT(__hlt::filter::__register_module)

inline void __hlt::filter::Base64Decode::__on_0x25_done() {
    auto __self = filter::Base64Decode::__self();
    return __hlt::filter::__hook_Base64Decode___on_0x25_done(__self);
}

inline void __hlt::filter::Base64Decode::__on_0x25_error() {
    auto __self = filter::Base64Decode::__self();
    return __hlt::filter::__hook_Base64Decode___on_0x25_error(__self);
}

inline void __hlt::filter::Base64Decode::__on_0x25_finally() {
    auto __self = filter::Base64Decode::__self();
    return __hlt::filter::__hook_Base64Decode___on_0x25_finally(__self);
}

inline void __hlt::filter::Base64Decode::__on_0x25_init() {
    auto __self = filter::Base64Decode::__self();
    return __hlt::filter::__hook_Base64Decode___on_0x25_init(__self);
}

inline void __hlt::filter::Base64Decode::__on_anon_2(const hilti::rt::Bytes& __dd) {
    auto __self = filter::Base64Decode::__self();
    return __hlt::filter::__hook_Base64Decode___on_anon_2(__dd, __self);
}

auto __hlt::filter::Base64Decode::__parse_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = Base64Decode::__self();
    hilti::rt::detail::checkStack();
    std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> __result;
    try {
        HILTI_RT_DEBUG(std::string("spicy"), std::string("filter::Base64Decode"));
        hilti::rt::debug::indent(std::string("spicy"));
          __location__("/opt/spicy/share/spicy/filter.spicy:28:21-40:2");
        (*__self).__on_0x25_init();
        hilti::rt::Bytes __transient_anon_2;

        // Begin parsing production: Variable: anon_2 -> bytes;
        spicy::rt::detail::printParserState(std::string("filter::Base64Decode"), __data, __cur, __lah, __lahe, std::string("default"), __trim);
        HILTI_RT_DEBUG(std::string("spicy-verbose"), std::string("- parsing production: Variable: anon_2 -> bytes"));
        hilti::rt::debug::indent(std::string("spicy-verbose"));
        while ( hilti::rt::Bool(true) ) {
            auto __ctor_2 = hilti::rt::StrongReference<spicy::rt::filter::detail::Filters>();
            hilti::rt::Bool more_data = spicy::rt::detail::waitForInputOrEod(__data, __cur, hilti::rt::integer::safe<std::uint64_t>{1u}, __ctor_2);
            if ( static_cast<bool>(__cur.size()) ) {
                __transient_anon_2 = __cur.data();
                __cur = __cur.advance(__cur.size());
                if ( __trim ) {
                    HILTI_RT_DEBUG(std::string("spicy-verbose"), std::string("- trimming input"));
                    (*__data).trim(__cur.begin());
                }

                HILTI_RT_DEBUG(std::string("spicy"), hilti::rt::fmt(std::string("anon_2 = %s"), __transient_anon_2));
                HILTI_RT_DEBUG(std::string("spicy-verbose"), hilti::rt::fmt(std::string("- setting field 'anon_2' to '%s'"), __transient_anon_2));
                  __location__("/opt/spicy/share/spicy/filter.spicy:29:13-33:10");
                (*__self).__on_anon_2(__transient_anon_2);
            }

            if ( ! (more_data) ) {
                break;
            }
        }

        hilti::rt::debug::dedent(std::string("spicy-verbose"));
        // End parsing production: Variable: anon_2 -> bytes;

          __location__("/opt/spicy/share/spicy/filter.spicy:28:21-40:2");
        (*__self).__on_0x25_done();
        spicy::rt::filter::forward_eod(__self);
        hilti::rt::debug::dedent(std::string("spicy"));
        __result = std::make_tuple(__cur, __lah, __lahe);
    }
    catch ( ... ) {
          __location__("/opt/spicy/share/spicy/filter.spicy:28:21-40:2");
        (*__self).__on_0x25_error();
        spicy::rt::filter::forward_eod(__self);
          __location__("/opt/spicy/share/spicy/filter.spicy:28:21-40:2");
        (*__self).__on_0x25_finally();
        throw;
    }

      __location__("/opt/spicy/share/spicy/filter.spicy:28:21-40:2");
    (*__self).__on_0x25_finally();
    return __result;
}

inline auto __hlt::filter::Base64Decode::__str__() -> std::optional<std::string> {
    auto __self = filter::Base64Decode::__self();
    return __hlt::filter::__hook_Base64Decode___str__(__self);
}

extern auto __hlt::filter::Base64Decode::parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View {
    hilti::rt::detail::checkStack();
    hilti::rt::ValueReference<__hlt::filter::Base64Decode> unit = hilti::rt::reference::make_value<__hlt::filter::Base64Decode>((__hlt::filter::Base64Decode()));
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: filter_Base64Decode -> anon_2;
    spicy::rt::detail::printParserState(std::string("filter::Base64Decode"), data, ncur, lahead, lahead_end, std::string("default"), hilti::rt::Bool(true));
    HILTI_RT_DEBUG(std::string("spicy-verbose"), std::string("- parsing production: Unit: filter_Base64Decode -> anon_2"));
    hilti::rt::debug::indent(std::string("spicy-verbose"));
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    hilti::rt::debug::dedent(std::string("spicy-verbose"));
    // End parsing production: Unit: filter_Base64Decode -> anon_2;

    return ncur;
}

extern auto __hlt::filter::Base64Decode::parse2(hilti::rt::ValueReference<__hlt::filter::Base64Decode>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View {
    hilti::rt::detail::checkStack();
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: filter_Base64Decode -> anon_2;
    spicy::rt::detail::printParserState(std::string("filter::Base64Decode"), data, ncur, lahead, lahead_end, std::string("default"), hilti::rt::Bool(true));
    HILTI_RT_DEBUG(std::string("spicy-verbose"), std::string("- parsing production: Unit: filter_Base64Decode -> anon_2"));
    hilti::rt::debug::indent(std::string("spicy-verbose"));
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    hilti::rt::debug::dedent(std::string("spicy-verbose"));
    // End parsing production: Unit: filter_Base64Decode -> anon_2;

    return ncur;
}

extern auto __hlt::filter::Base64Decode::parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View {
    hilti::rt::detail::checkStack();
    hilti::rt::ValueReference<__hlt::filter::Base64Decode> unit = hilti::rt::reference::make_value<__hlt::filter::Base64Decode>((__hlt::filter::Base64Decode()));
    spicy::rt::ParsedUnit::initialize((*gunit), unit, &type_info::__ti_filter_Base64Decode);
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: filter_Base64Decode -> anon_2;
    spicy::rt::detail::printParserState(std::string("filter::Base64Decode"), data, ncur, lahead, lahead_end, std::string("default"), hilti::rt::Bool(true));
    HILTI_RT_DEBUG(std::string("spicy-verbose"), std::string("- parsing production: Unit: filter_Base64Decode -> anon_2"));
    hilti::rt::debug::indent(std::string("spicy-verbose"));
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    hilti::rt::debug::dedent(std::string("spicy-verbose"));
    // End parsing production: Unit: filter_Base64Decode -> anon_2;

    return ncur;
}

inline void __hlt::filter::Zlib::__on_0x25_done() {
    auto __self = filter::Zlib::__self();
    return __hlt::filter::__hook_Zlib___on_0x25_done(__self);
}

inline void __hlt::filter::Zlib::__on_0x25_error() {
    auto __self = filter::Zlib::__self();
    return __hlt::filter::__hook_Zlib___on_0x25_error(__self);
}

inline void __hlt::filter::Zlib::__on_0x25_finally() {
    auto __self = filter::Zlib::__self();
    return __hlt::filter::__hook_Zlib___on_0x25_finally(__self);
}

inline void __hlt::filter::Zlib::__on_0x25_init() {
    auto __self = filter::Zlib::__self();
    return __hlt::filter::__hook_Zlib___on_0x25_init(__self);
}

inline void __hlt::filter::Zlib::__on_anon(const hilti::rt::Bytes& __dd) {
    auto __self = filter::Zlib::__self();
    return __hlt::filter::__hook_Zlib___on_anon(__dd, __self);
}

auto __hlt::filter::Zlib::__parse_stage1(hilti::rt::ValueReference<hilti::rt::Stream>& __data, hilti::rt::stream::View __cur, hilti::rt::Bool __trim, hilti::rt::integer::safe<int64_t> __lah, hilti::rt::stream::SafeConstIterator __lahe) -> std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> {
    auto __self = Zlib::__self();
    hilti::rt::detail::checkStack();
    std::tuple<hilti::rt::stream::View, hilti::rt::integer::safe<int64_t>, hilti::rt::stream::SafeConstIterator> __result;
    try {
        HILTI_RT_DEBUG(std::string("spicy"), std::string("filter::Zlib"));
        hilti::rt::debug::indent(std::string("spicy"));
          __location__("/opt/spicy/share/spicy/filter.spicy:8:13-25:2");
        (*__self).__on_0x25_init();
        hilti::rt::Bytes __transient_anon;

        // Begin parsing production: Variable: anon -> bytes;
        spicy::rt::detail::printParserState(std::string("filter::Zlib"), __data, __cur, __lah, __lahe, std::string("default"), __trim);
        HILTI_RT_DEBUG(std::string("spicy-verbose"), std::string("- parsing production: Variable: anon -> bytes"));
        hilti::rt::debug::indent(std::string("spicy-verbose"));
        while ( hilti::rt::Bool(true) ) {
            auto __ctor_1 = hilti::rt::StrongReference<spicy::rt::filter::detail::Filters>();
            hilti::rt::Bool more_data = spicy::rt::detail::waitForInputOrEod(__data, __cur, hilti::rt::integer::safe<std::uint64_t>{1u}, __ctor_1);
            if ( static_cast<bool>(__cur.size()) ) {
                __transient_anon = __cur.data();
                __cur = __cur.advance(__cur.size());
                if ( __trim ) {
                    HILTI_RT_DEBUG(std::string("spicy-verbose"), std::string("- trimming input"));
                    (*__data).trim(__cur.begin());
                }

                HILTI_RT_DEBUG(std::string("spicy"), hilti::rt::fmt(std::string("anon = %s"), __transient_anon));
                HILTI_RT_DEBUG(std::string("spicy-verbose"), hilti::rt::fmt(std::string("- setting field 'anon' to '%s'"), __transient_anon));
                  __location__("/opt/spicy/share/spicy/filter.spicy:14:6-18:10");
                (*__self).__on_anon(__transient_anon);
            }

            if ( ! (more_data) ) {
                break;
            }
        }

        hilti::rt::debug::dedent(std::string("spicy-verbose"));
        // End parsing production: Variable: anon -> bytes;

          __location__("/opt/spicy/share/spicy/filter.spicy:8:13-25:2");
        (*__self).__on_0x25_done();
        spicy::rt::filter::forward_eod(__self);
        hilti::rt::debug::dedent(std::string("spicy"));
        __result = std::make_tuple(__cur, __lah, __lahe);
    }
    catch ( ... ) {
          __location__("/opt/spicy/share/spicy/filter.spicy:8:13-25:2");
        (*__self).__on_0x25_error();
        spicy::rt::filter::forward_eod(__self);
          __location__("/opt/spicy/share/spicy/filter.spicy:8:13-25:2");
        (*__self).__on_0x25_finally();
        throw;
    }

      __location__("/opt/spicy/share/spicy/filter.spicy:8:13-25:2");
    (*__self).__on_0x25_finally();
    return __result;
}

inline auto __hlt::filter::Zlib::__str__() -> std::optional<std::string> {
    auto __self = filter::Zlib::__self();
    return __hlt::filter::__hook_Zlib___str__(__self);
}

extern auto __hlt::filter::Zlib::parse2(hilti::rt::ValueReference<__hlt::filter::Zlib>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::stream::View {
    hilti::rt::detail::checkStack();
    hilti::rt::stream::View ncur = (cur ? hilti::rt::optional::value(cur, "") : (*data).view());
    hilti::rt::integer::safe<int64_t> lahead = hilti::rt::integer::safe<std::int64_t>{0};
    hilti::rt::stream::SafeConstIterator lahead_end;

    // Begin parsing production: Unit: filter_Zlib -> anon;
    spicy::rt::detail::printParserState(std::string("filter::Zlib"), data, ncur, lahead, lahead_end, std::string("default"), hilti::rt::Bool(true));
    HILTI_RT_DEBUG(std::string("spicy-verbose"), std::string("- parsing production: Unit: filter_Zlib -> anon"));
    hilti::rt::debug::indent(std::string("spicy-verbose"));
    std::tie(ncur, lahead, lahead_end) = (*unit).__parse_stage1(data, ncur, hilti::rt::Bool(true), lahead, lahead_end);
    hilti::rt::debug::dedent(std::string("spicy-verbose"));
    // End parsing production: Unit: filter_Zlib -> anon;

    return ncur;
}

extern void __hlt::filter::__hook_Base64Decode___on_0x25_done_6b98(hilti::rt::ValueReference<Base64Decode>& __self) {
    hilti::rt::detail::checkStack();
      __location__("/opt/spicy/share/spicy/filter.spicy:35:15-36:51");
    spicy::rt::filter::forward((*__self), spicy::rt::base64::finish((*__self).z));
}

extern void __hlt::filter::__hook_Base64Decode___on_anon_2_bbf6(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<Base64Decode>& __self) {
    hilti::rt::detail::checkStack();
      __location__("/opt/spicy/share/spicy/filter.spicy:31:28-32:55");
    spicy::rt::filter::forward((*__self), spicy::rt::base64::decode((*__self).z, __dd));
}

extern void __hlt::filter::__hook_Zlib___on_0x25_done_7c7b(hilti::rt::ValueReference<Zlib>& __self) {
    hilti::rt::detail::checkStack();
      __location__("/opt/spicy/share/spicy/filter.spicy:20:15-21:49");
    spicy::rt::filter::forward((*__self), spicy::rt::zlib::finish((*__self).z));
}

extern void __hlt::filter::__hook_Zlib___on_0x25_init_40ab(hilti::rt::ValueReference<Zlib>& __self) {
    hilti::rt::detail::checkStack();
      __location__("/opt/spicy/share/spicy/filter.spicy:12:9-13:53");
    if ( __self->__p_window_bits.has_value() ) {
          __location__("/opt/spicy/share/spicy/filter.spicy:12:27-13:52");
        (*__self).z = spicy::rt::zlib::init(hilti::rt::optional::value(__self->__p_window_bits, "/opt/spicy/share/spicy/filter.spicy:13:40"));
    }
}

extern void __hlt::filter::__hook_Zlib___on_anon_e3c5(const hilti::rt::Bytes& __dd, hilti::rt::ValueReference<Zlib>& __self) {
    hilti::rt::detail::checkStack();
      __location__("/opt/spicy/share/spicy/filter.spicy:16:28-17:57");
    spicy::rt::filter::forward((*__self), spicy::rt::zlib::decompress((*__self).z, __dd));
}

extern void __hlt::filter::__init_module() {
    __hlt::filter::__register_filter_Zlib();
    __hlt::filter::__register_filter_Base64Decode();
}

extern void __hlt::filter::__register_filter_Base64Decode() {
    hilti::rt::detail::checkStack();
    filter::Base64Decode::__parser = spicy::rt::Parser(std::string("filter::Base64Decode"), hlt::filter::Base64Decode::parse1, hlt::filter::Base64Decode::parse2, hlt::filter::Base64Decode::parse3, hilti::rt::Null(), &type_info::__ti_filter_Base64Decode, std::string(""), hilti::rt::Vector<spicy::rt::MIMEType>({}), hilti::rt::Vector<spicy::rt::ParserPort>({}));
}

extern void __hlt::filter::__register_filter_Zlib() {
    hilti::rt::detail::checkStack();
    filter::Zlib::__parser = spicy::rt::Parser(std::string("filter::Zlib"), hilti::rt::Null(), hlt::filter::Zlib::parse2, hilti::rt::Null(), hilti::rt::Null(), &type_info::__ti_filter_Zlib, std::string(""), hilti::rt::Vector<spicy::rt::MIMEType>({}), hilti::rt::Vector<spicy::rt::ParserPort>({}));
}

extern void __hlt::filter::__register_module() { hilti::rt::detail::registerModule({ "filter", &__init_module, nullptr, nullptr}); }

static auto __hlt::filter::operator<<(std::ostream& o, const __hlt::filter::Zlib& x) -> std::ostream& { o << hilti::rt::to_string(x); return o; }

static auto __hlt::filter::operator<<(std::ostream& o, const __hlt::filter::Base64Decode& x) -> std::ostream& { o << hilti::rt::to_string(x); return o; }

extern auto hlt::filter::Base64Decode::parse1(hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt::filter::Base64Decode::parse1(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt::filter::Base64Decode::parse2(hilti::rt::ValueReference<__hlt::filter::Base64Decode>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(unit), ::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt::filter::Base64Decode::parse2(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt::filter::Base64Decode::parse3(hilti::rt::ValueReference<spicy::rt::ParsedUnit>& gunit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(gunit), ::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt::filter::Base64Decode::parse3(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt::filter::Zlib::parse2(hilti::rt::ValueReference<__hlt::filter::Zlib>& unit, hilti::rt::ValueReference<hilti::rt::Stream>& data, const std::optional<hilti::rt::stream::View>& cur, const std::optional<spicy::rt::UnitContext>& context) -> hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(unit), ::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt::filter::Zlib::parse2(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

/* __HILTI_LINKER_V1__
{"joins":{"__hlt::filter::__hook_Base64Decode___on_0x25_done":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::filter::Base64Decode","type":"struct Base64Decode"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<Base64Decode>&"}],"attribute":"","const":false,"id":"__hlt::filter::__hook_Base64Decode___on_0x25_done_6b98","linkage":"extern","result":"void"},"declare_only":false,"id":"__hlt::filter::__hook_Base64Decode___on_0x25_done","priority":0},{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::filter::Base64Decode","type":"struct Base64Decode"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::filter::Base64Decode>&"}],"attribute":"","const":false,"id":"__hlt::filter::__on_0x25_done","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::filter::__hook_Base64Decode___on_0x25_done","priority":0}],"__hlt::filter::__hook_Base64Decode___on_0x25_error":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::filter::Base64Decode","type":"struct Base64Decode"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::filter::Base64Decode>&"}],"attribute":"","const":false,"id":"__hlt::filter::__on_0x25_error","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::filter::__hook_Base64Decode___on_0x25_error","priority":0}],"__hlt::filter::__hook_Base64Decode___on_0x25_finally":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::filter::Base64Decode","type":"struct Base64Decode"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::filter::Base64Decode>&"}],"attribute":"","const":false,"id":"__hlt::filter::__on_0x25_finally","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::filter::__hook_Base64Decode___on_0x25_finally","priority":0}],"__hlt::filter::__hook_Base64Decode___on_0x25_init":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::filter::Base64Decode","type":"struct Base64Decode"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::filter::Base64Decode>&"}],"attribute":"","const":false,"id":"__hlt::filter::__on_0x25_init","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::filter::__hook_Base64Decode___on_0x25_init","priority":0}],"__hlt::filter::__hook_Base64Decode___on_anon_2":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::filter::Base64Decode","type":"struct Base64Decode"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::Bytes&"},{"id":"__self","type":"hilti::rt::ValueReference<Base64Decode>&"}],"attribute":"","const":false,"id":"__hlt::filter::__hook_Base64Decode___on_anon_2_bbf6","linkage":"extern","result":"void"},"declare_only":false,"id":"__hlt::filter::__hook_Base64Decode___on_anon_2","priority":0},{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::filter::Base64Decode","type":"struct Base64Decode"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::Bytes&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::filter::Base64Decode>&"}],"attribute":"","const":false,"id":"__hlt::filter::__on_anon_2","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::filter::__hook_Base64Decode___on_anon_2","priority":0}],"__hlt::filter::__hook_Base64Decode___str__":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::filter::Base64Decode","type":"struct Base64Decode"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::filter::Base64Decode>&"}],"attribute":"","const":false,"id":"__hlt::filter::__str__","linkage":"","result":"std::optional<std::string>"},"declare_only":true,"id":"__hlt::filter::__hook_Base64Decode___str__","priority":0}],"__hlt::filter::__hook_Zlib___on_0x25_done":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::filter::Zlib","type":"struct Zlib"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<Zlib>&"}],"attribute":"","const":false,"id":"__hlt::filter::__hook_Zlib___on_0x25_done_7c7b","linkage":"extern","result":"void"},"declare_only":false,"id":"__hlt::filter::__hook_Zlib___on_0x25_done","priority":0},{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::filter::Zlib","type":"struct Zlib"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::filter::Zlib>&"}],"attribute":"","const":false,"id":"__hlt::filter::__on_0x25_done","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::filter::__hook_Zlib___on_0x25_done","priority":0}],"__hlt::filter::__hook_Zlib___on_0x25_error":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::filter::Zlib","type":"struct Zlib"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::filter::Zlib>&"}],"attribute":"","const":false,"id":"__hlt::filter::__on_0x25_error","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::filter::__hook_Zlib___on_0x25_error","priority":0}],"__hlt::filter::__hook_Zlib___on_0x25_finally":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::filter::Zlib","type":"struct Zlib"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::filter::Zlib>&"}],"attribute":"","const":false,"id":"__hlt::filter::__on_0x25_finally","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::filter::__hook_Zlib___on_0x25_finally","priority":0}],"__hlt::filter::__hook_Zlib___on_0x25_init":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::filter::Zlib","type":"struct Zlib"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<Zlib>&"}],"attribute":"","const":false,"id":"__hlt::filter::__hook_Zlib___on_0x25_init_40ab","linkage":"extern","result":"void"},"declare_only":false,"id":"__hlt::filter::__hook_Zlib___on_0x25_init","priority":0},{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::filter::Zlib","type":"struct Zlib"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::filter::Zlib>&"}],"attribute":"","const":false,"id":"__hlt::filter::__on_0x25_init","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::filter::__hook_Zlib___on_0x25_init","priority":0}],"__hlt::filter::__hook_Zlib___on_anon":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::filter::Zlib","type":"struct Zlib"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::Bytes&"},{"id":"__self","type":"hilti::rt::ValueReference<Zlib>&"}],"attribute":"","const":false,"id":"__hlt::filter::__hook_Zlib___on_anon_e3c5","linkage":"extern","result":"void"},"declare_only":false,"id":"__hlt::filter::__hook_Zlib___on_anon","priority":0},{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::filter::Zlib","type":"struct Zlib"}],"callee":{"args":[{"id":"__dd","type":"const hilti::rt::Bytes&"},{"id":"__self","type":"hilti::rt::ValueReference<__hlt::filter::Zlib>&"}],"attribute":"","const":false,"id":"__hlt::filter::__on_anon","linkage":"","result":"void"},"declare_only":true,"id":"__hlt::filter::__hook_Zlib___on_anon","priority":0}],"__hlt::filter::__hook_Zlib___str__":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt::filter::Zlib","type":"struct Zlib"}],"callee":{"args":[{"id":"__self","type":"hilti::rt::ValueReference<__hlt::filter::Zlib>&"}],"attribute":"","const":false,"id":"__hlt::filter::__str__","linkage":"","result":"std::optional<std::string>"},"declare_only":true,"id":"__hlt::filter::__hook_Zlib___str__","priority":0}]},"module":"filter","namespace":"__hlt::filter","path":"/opt/spicy/share/spicy/filter.spicy","version":1}
*/

