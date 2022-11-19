#include "../source/RandomeIntegerSequenceGenerator.h"
#include <vector>

namespace StreamLineSender {
    TEST_CASE("Generate random integer numbers check size") {
        RandomeIntegerSequenceGenerator generator;
        std::vector<int> list;
        size = 100;
        generator.Generate(list, 10, 20, 5);
        REQUIRE(100 == list.size());
    }
}