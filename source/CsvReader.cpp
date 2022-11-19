#include "CsvReader.h"
#include <sstream>

namespace StreamLineSender {

    CsvReader::ReadCsv(const std::string& filePath, std::vector<SensorParameterList> &parameters) {
        std::ifstream file.open(filePath);
        if(file.is_open()) {
            ParseParameters()
        } else {
            std::cout << "error: failed to open " << filePath << "\n";
        }
    }
    void CsvReader::ParseParameters(std::ifstream &file, std::vector<SensorParameterList> &parameters) {
        std::string line;        
        file.getline(line);
        std::vector<std::string> list;
        std::istreamstream ss(line);
        auto [Parameter, type, unit];
    }
}