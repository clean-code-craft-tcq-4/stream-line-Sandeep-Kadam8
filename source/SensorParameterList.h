#include <vector>
#include <string>

namespace StreamLineSender {

template <class DataType>
class SensorParameterList {
public:   
    SensorParameterList(const std::string& parameterName, const std::string& parameterUnit)
        :m_parameterName{parameterName}, m_parameterUnit{parameterUnit}
    {

    }

    std::string GetParameterName() {
        return m_parameterName;
    }
    std::string GetParameterUnit() {
        return m_parameterUnit;
    }    
    DataType GetParameterList() const {
        return list;
    }
    void addItem(const DataType &) {
        list.push_back();
    }
private:
    std::string m_parameterName, m_parameterUnit;
    std::vector<DataType> list;
};

}
