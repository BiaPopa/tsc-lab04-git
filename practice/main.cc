#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

int main() {
    std::srand(std::time(nullptr));

    int r1 = std::rand();

    long r2 = random();

    std::random_device rd;
    std::mt19937 mt(rd());
    int r3 = mt();

    std::minstd_rand lcg(rd());
    int r4 = lcg();

    std::ranlux24_base ranlux(rd());
    int r5 = ranlux();

    std::cout << "Method 1 (rand): " << r1 << '\n';
    std::cout << "Method 2 (random): " << r2 << '\n';
    std::cout << "Method 3 (mt19937): " << r3 << '\n';
    std::cout << "Method 4 (minstd_rand): " << r4 << '\n';
    std::cout << "Method 5 (ranlux24_base): " << r5 << '\n';

    return 0;
}
