#include "catch.hpp"
#include "../source/ReadCSV.h"

namespace StreamLineSender {
    TEST_CASE("Object creation") {
        REQUIRE_THROWS(ReadCSV csv);
    }
}