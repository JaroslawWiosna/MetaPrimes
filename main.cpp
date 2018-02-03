#include <iostream>
#include "Primes.hpp"
#include "Antiprimes.hpp"

int main() {

    constexpr unsigned number_of_primes{150};
    constexpr unsigned number_of_antiprimes{15};

    std::cout << "Prime numbers: " << std::endl;
    constexpr auto p = Primes<number_of_primes>();
    for (auto x : p.array) {
        std::cout << x << ", ";
    }
    std::cout << std::endl;

    std::cout << "Highly composite numbers: " << std::endl;
    constexpr auto ap = Antiprimes<number_of_antiprimes>();
    for (auto x : ap.array) {
        std::cout << x << ", ";
    }
    std::cout << std::endl;

    constexpr auto p1 = Primes<1>();
    for (auto x : p1.array) {
        std::cout << x << ", ";
    }
    std::cout << std::endl;
    constexpr auto p2 = Primes<2>();
    for (auto x : p2.array) {
        std::cout << x << ", ";
    }
    std::cout << std::endl;



    return 0;
}
