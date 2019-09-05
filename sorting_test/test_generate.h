#pragma once

#include <cmath>
#include <cstdio>
#include <iostream>
#include <stdlib.h>
#include <vector>

class Test_case {
private:
    int test_size;
    std::vector<int> number;

public:
    Test_case() {
        test_size = 0;
        number.clear();
    }

    void update_size(int new_size) { test_size = new_size; }

    void generate_random() {
        srand(time(NULL));
        number.clear();
        for (int i = 0; i < test_size; ++i)
            number.push_back(rand());
    }

    std::vector<int> return_case() { return number; }
    int return_size() { return test_size; }

    void putout() {
        for (auto i = number.begin(); i < number.end(); ++i) {
            printf("%15d", (*i));
            if ((i - number.begin() + 1) % 10 == 0)
                std::cout << std::endl;
        }
        std::cout << std::endl;
    }
};

void Generate_case(Test_case &test);