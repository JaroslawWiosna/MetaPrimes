#include <array>
#include "Primes.hpp"

constexpr unsigned how_many_factors(unsigned number) {
    unsigned a{number};
    unsigned result{1};
    unsigned tmp{1};
    constexpr auto primes = Primes<400>();
    unsigned i{};
    while (1) {
        if (a == primes.array[i]) {
            tmp += 1;
	    result *= tmp;
	    return result;
        } else if ( a % primes.array[i] == 0) {
            tmp += 1;
            a /= primes.array[i];
        } else {
            ++i;
            result *= tmp;
            tmp = 1;
        }
    }
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



