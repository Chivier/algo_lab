#include "my_sorting.h"
#include <omp.h>

// * Basic Bubble_Sort
// * Input: Array origin
// * Ouput: Whether the sort is done or not

int bubble_sort(Arr &origin) {
    bool flag;
    if (origin.size() == 0)
        return 0;

    for (int i = 0; i < origin.size(); ++i) {
        flag = 1;
        for (int j = 0; j < origin.size() - i - 1; ++j) {
            if (origin[j] > origin[j + 1]) {
                flag = 0;
                std::swap(origin[j], origin[j + 1]);
            }
        }
        if (flag)
            return 1;
    }
    return 1;
}

// * Basic Insertion_Sort
// * Input: Array origin
// * Ouput: Whether the sort is done or not

int insertion_sort(Arr &origin) {
    if (origin.size() == 0)
        return 0;
    for (auto i = origin.begin() + 1; i < origin.end(); ++i) {
        int key = *i;
        auto j = i - 1;
        for (; j >= origin.begin(); --j) {
            if (*j > key)
                *(j + 1) = *j;
            else
                break;
        }
        ++j;
        *j = key;

        // for (auto test = origin.begin(); test < origin.end(); ++test)
        //     std::cout << *test << " ";
        // std::cout << "\n";
    }
    return 1;
}

int bubble_sort_paralled(Arr &origin) {
    bool flag = 1;

    int tag = 0;
    omp_set_num_threads(8);
    int i;
#pragma omp parallel for num_threads(1) shared(tag) private(i)
    for (i = 1; i <= 100; i++) {
        tag += i;
    }

    std::cout << tag << std::endl;
    std::cout << tag << std::endl;
    flag = 0;

    while (flag) {
        flag = 0;
#pragma omp parallel for num_threads(8)
        for (auto i = origin.begin(); i < origin.end(); i += 2) {
            if (*(i) > *(i + 1)) {
                std::swap(*i, *(i + 1));
                flag = 1;
            }
            // std::cout << omp_get_thread_num() << "   ";
            // std::cout << omp_get_num_threads() << "   ";
            // std::cout << omp_in_parallel() << "\n";
        }
#pragma ivdep
#pragma omp parallel for shared(flag)
        for (auto i = origin.begin() + 1; i < origin.end(); i += 2) {
            if (*(i) > *(i + 1)) {
                std::swap(*i, *(i + 1));
                flag = 1;
            }
        }
    }
    return 1;
}