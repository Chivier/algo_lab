#include "my_sorting.h"

int bubble_sort(Arr &origin) {
    int i;
    return 1;
}

int insertion_sort(Arr &origin) {
    if (origin.size() == 0)
        return 0;
    for (auto i = origin.begin() + 1; i < origin.end(); ++i) {
        int key = *i;
        for (auto j = i - 1; j >= origin.begin(); --j) {
            if (*j > key)
                *(j + 1) = *j;
            else {
                *j = key;
                break;
            }
        }
    }
    return 1;
}