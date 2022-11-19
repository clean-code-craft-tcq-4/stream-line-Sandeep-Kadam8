#include "catch.hpp"
#include "../source/ReadCSV.h"

namespace StreamLineSender {
    TEST_CASE("Object creation") {
        ReadCSV csv("testFile.csv");
    }
}