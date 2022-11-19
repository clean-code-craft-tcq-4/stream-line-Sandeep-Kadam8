#include <vector>
#include <string>

namespace StreamLineSender {

template <type DataType>
class SensorParameterList {
public:
    SensorParameterList(const std::string& parameterName, const std::string& parameterUnit);
    
    std::string GetParameterName();
    std::string GetParameterUnit();
    
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
