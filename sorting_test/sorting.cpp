#include "my_sorting.h"
#include "omp.h"
#include "test_generate.h"

Test_case test;

int main() {
    Generate_small_case(test);
    test.putout_small();
    //
    //* Test insertion sort.
    std::vector<int> data = test.return_case();
    insertion_sort(data);
    for (auto i = data.begin(); i < data.end(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;

    // * Test bubble sort.
    data = test.return_case();
    bubble_sort(data);
    for (auto i = data.begin(); i < data.end(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;

    // * Test para-bubble sort.
    data = test.return_case();
    bubble_sort_paralled(data);
    for (auto i = data.begin(); i < data.end(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;

#pragma omp parallel
    {
        printf("The parallel region is executed by thread %d\n",
               omp_get_thread_num());
        if (omp_get_thread_num() == 2) {
            printf(" Thread %d does things differently\n",
                   omp_get_thread_num());
        }
    } /*-- End of parallel region --*/
}