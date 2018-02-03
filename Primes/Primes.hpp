#include <array>

constexpr bool is_prime(unsigned n) {
    for(long i{2}; i <= n/2 ; ++i) {
        if (n % i == 0)
		return false;
    }
    return true;
}

template<long N>
struct Primes {
    constexpr Primes() : array() {
        array[0] = 2;
	array[1] = 3;
	long cnt{2};
	long i{5};
	for (; cnt < N ;) {
            if (is_prime(i)) {
                array[cnt++]=i;
        	}
	    i+=2;
         }
    }
    std::array<unsigned, N> array;
};


