#ifndef TIME_TEST_H
#define TIME_TEST_H

#include "headers.h"
#include <chrono>

typedef unsigned long long ULL;

ULL rdtsc();
ULL record_start_time();
ULL record_end_time();
// auto system_start_time_record();
// auto system_end_time_record();
// static unsigned long long st_time, ed_time;

#endif