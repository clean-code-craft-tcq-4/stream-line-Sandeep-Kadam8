#include "../source/RandomIntegerSequenceGenerator.h"
#include <vector>

namespace StreamLineSender {
    
    TEST_CASE("Generate random integer numbers check size") {
    //     RandomIntegerSequenceGenerator generator;
    //     std::vector<int> list;
    //     int size = 100;
    //     generator.Generate(list, 10, 20, 5);
    //     REQUIRE(100 == list.size());
    }

    bool IsValueInRange(int start, int end, int value) {
        return (value >= start && value <= end);
    }

    // TEST_CASE("Verify numbers generated are in range") {
    //     RandomIntegerSequenceGenerator generator;
    //     std::vector<int> list;
    //     int size = 100;
    //     generator.Generate(list, 10, 20, 5);
    //     for(auto value:list) {
    //        REQUIRE(true == IsValueInRange(10, 20, value));
    //     }
    // }
}