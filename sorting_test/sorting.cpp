#include "headers.h"
#include "my_sorting.h"
#include "test_generate.h"
#include "time_test.h"

Test_case test;

int main() {
    // puts("Origin Data: ");
    // Generate_small_case(test);
    // test.putout_small();

    // * Test insertion sort.
    puts("Insertion sort: ");
    std::vector<int> data = test.return_case();
    insertion_sort(data);
    // for (auto i = data.begin(); i < data.end(); ++i)
    //     std::cout << *i << " ";
    std::cout << std::endl
              << std::endl;

    // * Test bubble sort.

    record_start_time();
    puts("Bubble sort:");
    data = test.return_case();
    bubble_sort(data);
    // for (auto i = data.begin(); i < data.end(); ++i)
    //     std::cout << *i << " ";
    // puts("");
    std::cout << record_end_time() << std::endl;
    std::cout << std::endl
              << std::endl;

    record_start_time();
    // * Test para-bubble sort.
    puts("Paralleled bubble sort: ");
    data = test.return_case();
    bubble_sort_paralled(data);
    // for (auto i = data.begin(); i < data.end(); ++i)
    //     std::cout << *i << " ";
    // puts("");
    std::cout << record_end_time() << std::endl;
    std::cout << std::endl
              << std::endl;

    return 0;
}
