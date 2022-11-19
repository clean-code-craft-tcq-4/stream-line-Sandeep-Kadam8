#include "catch.hpp"
#include "../source/ReadCSV.h"
#include 

namespace StreamLineSender {
    TEST_CASE("Object creation") {
        CHECK_NOTHROW(ReadCSV csv("testFile.csv"));
    }
}