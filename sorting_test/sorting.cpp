#include "my_sorting.h"
#include "test_generate.h"

Test_case test;

int main() {
    Generate_small_case(test);
    test.putout_small();

    std::vector<int> data = test.return_case();
    insertion_sort(data);
    for (auto i = data.begin(); i < data.end(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;

    data = test.return_case();
    bubble_sort(data);

    for (auto i = data.begin(); i < data.end(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;
}