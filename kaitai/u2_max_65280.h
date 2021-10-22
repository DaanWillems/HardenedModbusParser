#include <stdexcept>

class u2_max_65280_t {

public:
    u2_max_65280_t(kaitai::kstream* p__io) {
        uint16_t content = p__io->read_u2be();
        if(content > 65280) {
            throw std::runtime_error("Integer exceeded 65280");
        }
    }
};