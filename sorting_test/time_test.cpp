#include "time_test.h"

using namespace std::chrono;

static int st_time, ed_time;
static clock_t sys_st_time, sys_ed_time;

ULL rdtsc(void) {
    unsigned long hi = 0, lo = 0;

    __asm__ __volatile__("lfence;rdtsc"
                         : "=a"(lo), "=d"(hi));

    return (((unsigned long long)lo)) | (((unsigned long long)hi) << 32);
}

ULL record_start_time(void) {
    st_time = rdtsc();
    return st_time;
}

ULL record_end_time(void) {
    ed_time = rdtsc();
    return ed_time - st_time;
}
