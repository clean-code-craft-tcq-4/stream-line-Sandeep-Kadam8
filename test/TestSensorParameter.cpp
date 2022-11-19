#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "SensorParameterList.h"

TEST_CASE("create a sensor parameter object") {
    SensorParameter<int> p("temp", "celsius");
}
