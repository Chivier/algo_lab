#include "test_generate.h"

const int SMALL_SIZE = 10;
const int TEST_SIZE1 = 200;
const int TEST_SIZE2 = 50000;
const int TEST_SIZE3 = 10000000;

void Generate_small_case(Test_case &test) {
    test.update_size(SMALL_SIZE);
    test.generate_small_random();
}

void Generate_case(Test_case &test, const int mod) {
    switch (mod) {
    case 1:
        test.update_size(TEST_SIZE1);
        break;

    case 2:
        test.update_size(TEST_SIZE2);
        break;

    case 3:
        test.update_size(TEST_SIZE3);
        break;

    default:
        break;
    }

    test.generate_random();
}
