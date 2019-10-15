#ifndef TEST_GENERATE_H
#define TEST_GENERATE_H

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
    // * Initailize the class.
    Test_case() {
        test_size = 0;
        number.clear();
    }

    // * Update new size for a certain test case.
    void update_size(int new_size) { test_size = new_size; }

    // * Generate new random data.
    void generate_random() {
        srand(time(NULL));
        number.clear();
        for (int i = 0; i < test_size; ++i)
            number.push_back(rand());
    }

    // * Generate small random data.
    void generate_small_random() {
        srand(time(NULL));
        number.clear();
        for (int i = 0; i < test_size; ++i)
            number.push_back(rand() % 50);
    }

    // * Return all items.
    std::vector<int> return_case() { return number; }
    int return_size() { return test_size; }

    // * Put out numbers in one case.
    void putout_small() {
        for (auto i = number.begin(); i < number.end(); ++i) {
            printf("%5d", (*i));
            if ((i - number.begin() + 1) % 10 == 0)
                std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    void putout() {
        for (auto i = number.begin(); i < number.end(); ++i) {
            printf("%15d", (*i));
            if ((i - number.begin() + 1) % 10 == 0)
                std::cout << std::endl;
        }
        std::cout << std::endl;
    }
};

void Generate_small_case(Test_case &test);
void Generate_case(Test_case &test, const int mod);

#endif