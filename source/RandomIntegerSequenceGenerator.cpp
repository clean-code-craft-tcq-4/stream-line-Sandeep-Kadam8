#include "RandomIntegerSequenceGenerator.h"
#include <random>

namespace StreamLineSender {

    void RandomIntegerSequenceGenerator::Generate(std::vector<int> &list, int RangeBegin, int RangeEnd, int count) {
        auto offset = RangeEnd - RangeBegin;
        list.resize(count);
        for(auto &item: list) {
           item = GetRandomNumber(RangeBegin, offset);
        }
    }

    int RandomIntegerSequenceGenerator::GetRandomNumber(int RangeBegin, int offset) {        
        srand((unsigned) time(NULL));
        return offset + (rand() % RangeBegin);
    }
}