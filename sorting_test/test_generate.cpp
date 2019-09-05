#include "test_generate.h"

const int TEST_SIZE1 = 20;
const int TEST_SIZE2 = 10000;
const int TEST_SIZE3 = 10000000;

void Generate_case(Test_case &test) {
    test.update_size(TEST_SIZE1);
    test.generate_random();
}