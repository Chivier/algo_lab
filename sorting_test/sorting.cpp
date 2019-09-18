#include "headers.h"
#include "my_sorting.h"
#include "test_generate.h"
#include "time_test.h"

Test_case test;

void time_test() {
    // puts("Origin Data: ");
    // Generate_small_case(test);
    // test.putout_small();
    Generate_case(test, 1);
    //test.putout();

    std::cout << test.return_size() << std::endl;

    // * Test system sort
    auto start = std::chrono::high_resolution_clock::now();
    puts("System sort: ");
    std::vector<int> data = test.return_case();
    sort(data.begin(), data.end());
    // for (auto i = data.begin(); i < data.end(); ++i)
    //     std::cout << *i << " ";
    // puts("");
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Elapsed time: " << elapsed.count() << " s\n";
    std::cout << "Sorting check: " << sort_check(data) ? "True" : "False";
    sort_print(data);
    std::cout << std::endl
              << std::endl;

    // * Test insertion sort.
    start = std::chrono::high_resolution_clock::now();
    puts("Insertion sort: ");
    data = test.return_case();
    insertion_sort(data);
    // for (auto i = data.begin(); i < data.end(); ++i)
    //     std::cout << *i << " ";
    //std::cout << record_end_time() << std::endl;
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elapsed time: " << elapsed.count() << " s\n";
    std::cout << "Sorting check: " << sort_check(data) ? "True" : "False";
    sort_print(data);
    std::cout << std::endl
              << std::endl;

    // * Test bubble sort.
    start = std::chrono::high_resolution_clock::now();
    puts("Bubble sort:");
    data = test.return_case();
    bubble_sort(data);
    // for (auto i = data.begin(); i < data.end(); ++i)
    //     std::cout << *i << " ";
    // puts("");
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elapsed time: " << elapsed.count() << " s\n";
    std::cout << "Sorting check: " << sort_check(data) ? "True" : "False";
    sort_print(data);
    std::cout << std::endl
              << std::endl;

    // * Test para-bubble sort.
    start = std::chrono::high_resolution_clock::now();
    puts("Paralleled bubble sort: ");
    data = test.return_case();
    bubble_sort_paralled(data);
    // for (auto i = data.begin(); i < data.end(); ++i)
    //     std::cout << *i << " ";
    // puts("");
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elapsed time: " << elapsed.count() << " s\n";
    std::cout << "Sorting check: " << sort_check(data) ? "True" : "False";
    sort_print(data);
    std::cout << std::endl
              << std::endl;

    return;
}

void correct_test() {
    puts("Origin Data: ");
    Generate_small_case(test);
    test.putout_small();

    Arr data;
    data = test.return_case();

    merge_sort(data, 0, data.size() - 1);

    for (auto i = data.begin(); i < data.end(); ++i)
        std::cout << *i << " ";
    puts("");

    data = test.return_case();

    quick_sort(data, 0, data.size() - 1);

    for (auto i = data.begin(); i < data.end(); ++i)
        std::cout << *i << " ";
    puts("");
}

int main() {
    correct_test();
}