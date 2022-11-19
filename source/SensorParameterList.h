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
    std::vector<DataType> GetParameterList() const {
        return list;
    }
    void addItems(const std::vector<DataType>& items) {
        list.insert(list.end(), items.begin(), items.end());
    }
    void addItem(const DataType &item) {
        list.push_back(item);
    }
private:
    std::string m_parameterName, m_parameterUnit;
    std::vector<DataType> list;
};

}
