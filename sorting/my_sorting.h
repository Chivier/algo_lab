#ifndef MY_SORTING_H
#define MY_SORTING_H

#include "headers.h"

typedef std::vector<int> Arr;

void sort_print(const Arr &origin);
bool sort_check(const Arr &origin);

int bubble_sort(Arr &origin);
int bubble_sort_paralled(Arr &origin);

int insertion_sort(Arr &origin);

int merge_sort(Arr &origin, const int st_pos, const int ed_pos);
int merge_sort_paralled(Arr &origin);

int quick_sort(Arr &origin, int lb, int rb);
int quick_sort_stable(Arr &origin, int lb, int rb);
int quick_sort_parralled(Arr &origin, int lb, int rb);

#endif