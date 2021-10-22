#include <stdexcept>

class u2_max_125_t {

public:
    u2_max_125_t(kaitai::kstream* p__io) {
        uint16_t content = p__io->read_u2be();
        if(content > 125) {
            throw std::runtime_error("Integer exceeded 125");
        }
    }
};