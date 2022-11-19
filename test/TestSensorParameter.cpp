#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../source/SensorParameterList.h"

using StreamLineSender;

TEST_CASE("create a sensor parameter object") {
    SensorParameterList<int> p("temp", "celsius");
}
