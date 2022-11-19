#include "RandomIntegerSequenceGenerator.h"
#include <random>

namespace StreamLineSender {

    RandomIntegerSequenceGenerator::Generate(std::vector<int> &list, int RangeBegin, int RangeEnd, int count) {
        auto offset = RangeEnd - RangeBegin;
        list.resize(count);
        const auto &getRandomNumber = std::bind(&RandomIntegerSequenceGenerator::GetRandomNumber,
                                                this,
                                                RangeBegin,
                                                offset);
        std::generate(list.begin(), list.end(), getRandomNumber);
    }

    int RandomIntegerSequenceGenerator::GetRandomNumber(int RangeBegin, int offset) {        
        srand((unsigned) time(NULL));
        return offset + (rand() % RangeBegin);
    }
}