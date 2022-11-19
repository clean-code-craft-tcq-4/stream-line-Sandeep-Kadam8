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

TEST_CASE("Add Item") {
    std::string parameter = "temperature";
    std::string unit = "celsius";
    SensorParameterList<int> temp(parameter, unit);

    temp.addItem(12);

    REQUIRE(1 == temp.GetParameterList().size());
}

TEST_CASE("Add Items") {
    std::string parameter = "temperature";
    std::string unit = "celsius";
    SensorParameterList<int> temp(parameter, unit);

    temp.addItems(12, 34, 56);

    REQUIRE(3 == temp.GetParameterList().size());
}

}