#include <array>

constexpr unsigned how_many_factors(unsigned number) {
    unsigned cnt{};
    for (unsigned i{1} ; i<=number ; ++i) {
        if (number % i == 0) {
            ++cnt;
        }
    }
    return cnt;
}

template<long N>
struct Antiprimes {
    constexpr Antiprimes() : array() {
        array[0]=1; 
        array[1]=2; 
        array[2]=4; 
        unsigned cnt{3};
        unsigned i{6};
	unsigned max_factors{3};
        for (; cnt < N ;) {
            if (how_many_factors(i) > max_factors) {
                array[cnt++] = i;
		max_factors = how_many_factors(i);
            }
	    i+=2;
         }
    }
    std::array<unsigned, N> array;
};



