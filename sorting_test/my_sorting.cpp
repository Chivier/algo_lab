#include "my_sorting.h"

// * Sort Checker 1
// * Put out first 20 number in the array to verify the array is sorted or not
// * Input: Array
// * Output: None
void sort_print(const Arr &origin) {
    for (auto i = origin.begin(); i < origin.begin() + 200; ++i)
        std::cout << *i << "  ";
    puts("");
}

// * Sort Checker 2
// * Input: Array
// * Output: Whether the array is in proper sequence

bool sort_check(const Arr &origin) {
    for (auto i = origin.begin() + 1; i < origin.end(); ++i) {
        if (*i < *(i - 1))
            return 0;
    }
    return 1;
}

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

// * Paralleled Bubble_Sort
// * Input: Array origin
// * Output: Whether the sort is done or not

int bubble_sort_paralled(Arr &origin) {
    bool flag = 1;
    int tag = 0;

    while (flag) {
        flag = 0;
#pragma omp parallel for num_threads(8) shared(flag)
        for (auto i = origin.begin(); i < origin.end() - 1; i += 2) {
            if (*(i) > *(i + 1)) {
#pragma omp atomic update
                *i ^= *(i + 1) ^= *i ^= *(i + 1);
                flag = 1;
            }
        }

#pragma omp parallel for num_threads(8) shared(flag)
        for (auto i = origin.begin() + 1; i < origin.end() - 1; i += 2) {
            if (*(i) > *(i + 1)) {
#pragma omp atomic update
                *i ^= *(i + 1) ^= *i ^= *(i + 1);
                flag = 1;
            }
        }
    }
    return 1;
}

// * Merge_Sort
// * Input: Array origin
// * Output: Whether the sort is done or not