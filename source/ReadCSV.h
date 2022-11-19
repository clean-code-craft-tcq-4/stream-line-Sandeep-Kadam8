#ifndef READ_CSV
#define READ_CSV

#include <fstream>
#include "SensorParameterList.h"

namespace StreamLineSender {
    class READ_CSV {
    public:
        READ_CSV(const std::string& filePath);
    private:
        std::ifstream m_file;
    };
}

#endif