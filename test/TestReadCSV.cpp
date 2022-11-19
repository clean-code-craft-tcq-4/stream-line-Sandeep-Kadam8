#include "catch.hpp"
#include "../source/ReadCSV.h"
#include 

namespace StreamLineSender {
    TEST_CASE("Object creation") {
        CHECK_THROWS(READ_CSV csv);
    }
}