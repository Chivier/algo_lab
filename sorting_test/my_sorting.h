#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <vector>

typedef std::vector<int> Arr;

int bubble_sort(Arr &origin);
int bubble_sort_paralled(Arr &origin);

int insertion_sort(Arr &origin);

int merge_sort(Arr &origin);
int merge_sort_paralled(Arr &origin);

int quick_sort(Arr &origin, int lb, int rb);
int quick_sort_parralled(Arr &origin, int lb, int rb);
