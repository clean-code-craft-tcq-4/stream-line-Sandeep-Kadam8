#incldue "RandomIntegerSequenceGenerator.h"
#include <random>
#include <stdlib.h>
#include <time.h>

namespace StreamLineSender {

    RandomeIntegerSequenceGenerator::Generate(std::vector<int> &list, int RangeBegin, int RangeEnd, int count) {
        auto offset = RangeEnd - RangeBegin;
        list.resize(count);
        const auto &getRandomNumber = std::bind(&RandomeIntegerSequenceGenerator::GetRandomNumber,
                                                this,
                                                RangeBegin,
                                                offset);
        std::generate(list.begin(), list.end(), getRandomNumber);
    }

    int GetRandomNumber(int RangeBegin, int offset) {        
        srand((unsigned) time(NULL));
        return offset + (rand() % RangeBegin);
    }
}