#include <vector>

namespace StreamLineSender {
    class RandomIntegerSequenceGenerator {
    public:
        RandomIntegerSequenceGenerator() = default;
        ~RandomIntegerSequenceGenerator() = default;
        /*
            Generate randome integer numbers within the given range and put it given list.
            @param list vector of integer to be filled with random numbers
            @param RangeBegin begining of the range
            @param RangeEnd End of the range
            @param count number of random numbers in list
        */
        void Generate(std::vector<int> &list, int RangeBegin, int RangeEnd, int count);
    private:
        int GetRandomNumber(int RangeBegin, int offset);
    };
}