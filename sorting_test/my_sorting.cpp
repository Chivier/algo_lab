#include "my_sorting.h"

int bubble_sort(Arr &origin) {
    bool flag;
    if (origin.size() == 0)
        return 0;

    for (int i = 0; i < origin.size(); ++i) {
        flag = 1;
        for (int j = i; j < origin.size() - 1; ++j) {
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