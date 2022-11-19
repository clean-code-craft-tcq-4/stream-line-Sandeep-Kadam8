#ifndef READ_CSV
#define READ_CSV

#include <string>
#include <fstream>
#include "SensorParameterList.h"

namespace StreamLineSender {
    class ReadCSV {
    public:
        ReadCSV(const std::string& filePath);
    private:
        std::ifstream m_file;
    };
}

#endif