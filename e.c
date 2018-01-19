#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <string>
#include <time.h>

std::string gen_random() {
    size_t len = rand() % 25 + 5;

    std::string x;

    std::generate_n(std::back_inserter(x), len, rand);
    return x;
}

static const int num = 10000000;

int main(){
    std::vector<std::string> strings;

    std::generate_n(std::back_inserter(strings), num, gen_random);

    clock_t start = clock();
    std::sort(strings.begin(), strings.end());
    clock_t ticks = clock() - start;

    std::cout << ticks / (double)CLOCKS_PER_SEC;

    return 0;
}
