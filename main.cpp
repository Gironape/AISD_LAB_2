#include <iostream>
#include "sorts.h"
int main() {
    srand(time(NULL));
    auto a = get_stats_random(10);
    for (int i = 0; i < 4; ++i) std::cout << a[i] << " ";
    std::cout << std::endl;
    //for (int j = 7000; j <= 10000; j += 1000) {
    /*for (int j = 7000; j <= 10000; j += 1000) {
        auto a = get_stats_random(j);
        std::cout << "Size:" << j << " " << "indicators:" << " ";
        for (int i = 0; i < 4; ++i) std::cout << a[i] << " ";
        std::cout << std::endl;
    }
    int b = 25000;
    auto v = get_stats_random(b);
    std::cout << "Size:" << b << " " << "indicators:" << " ";
    for (int i = 0; i < 4; ++i) std::cout << v[i] << " ";
    std::cout << std::endl;
    int c = 50000;
    auto d = get_stats_random(c);
    std::cout << "Size:" << c << " " << "indicators:" << " ";
    for (int i = 0; i < 4; ++i) std::cout << d[i] << " ";
    std::cout << std::endl;

   // }
    auto b = get_stats_sort(1000);
    for (int i = 0; i < 4; ++i) std::cout << b[i] << " ";
    std::cout << std::endl;
    auto c = get_stats_reverse_sort(1000);
    for (int i = 0; i < 4; ++i) std::cout << c[i] << " ";*/
    
    
    return 0;
}