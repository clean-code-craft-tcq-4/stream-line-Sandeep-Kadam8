#ifndef CSV_READER
#define CSV_READER

#include <string>
#include <fstream>
#include "SensorParameterList.h"

namespace StreamLineSender {
    class CsvReader {
    public:
        void ReadCsv(const std::string& filePath, std::vector<SensorParameterList> &parameters);
        void ParseParameters(std::ifstream &file, std::vector<SensorParameterList> &parameters);
    };
}

#endif