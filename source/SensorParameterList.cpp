#include "SensorParameterList.h"

namespace StreamLineSender {

SensorParameterList<DataType>::SensorParameterList(const std::string& parameterName, const std::string& parameterUnit)
    :m_parameterName{parameterName}, m_parameterUnit{parameterUnit}
{

}

std::string SensorParameterList::GetParameterName() {
    return m_parameterName;
}
std::string SensorParameterList::GetParameterUnit() {
    return m_parameterUnit;
}

}