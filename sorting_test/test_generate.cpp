#include "test_generate.h"

const int SMALL_SIZE = 10;
const int TEST_SIZE1 = 20;
const int TEST_SIZE2 = 10000;
const int TEST_SIZE3 = 10000000;

void Generate_small_case(Test_case &test) {
    test.update_size(SMALL_SIZE);
    test.generate_small_random();
}

void Generate_case(Test_case &test) {
    test.update_size(TEST_SIZE1);
    test.generate_random();
}
