#include "catch.hpp"
#include "../source/ReadCSV.h"
#include 

namespace StreamLineSender {
    TEST_CASE("Object creation") {
        CHECK_THROWS(ReadCSV csv{"testFile"});
    }
}