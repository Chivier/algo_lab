#ifndef MY_SORTING_H
#define MY_SORTING_H

#include "headers.h"

typedef std::vector<int> Arr;

int bubble_sort(Arr &origin);
int bubble_sort_paralled(Arr &origin);

int insertion_sort(Arr &origin);

int merge_sort(Arr &origin);
int merge_sort_paralled(Arr &origin);

int quick_sort(Arr &origin, int lb, int rb);
int quick_sort_parralled(Arr &origin, int lb, int rb);

#endif