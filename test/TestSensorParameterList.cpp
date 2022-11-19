#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../source/SensorParameterList.h"

namespace StreamLineSender {

TEST_CASE("create a sensor parameter object") {
    std::string parameter = "temperature";
    std::string unit = "celsius";
    SensorParameterList<int> temp(parameter, unit);
    REQUIRE(parameter == temp.GetParameterName());
    REQUIRE(unit == temp.GetParameterUnit());
}

}