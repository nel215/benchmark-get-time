#include<iostream>

using namespace std;

const double ticks_per_sec = 3100000000;
inline double get_time() {
    uint32_t lo, hi;
    asm volatile ("rdtsc" : "=a" (lo), "=d" (hi));
    return (((uint64_t)hi << 32) | lo) / ticks_per_sec;
}

int main(){
    for(int i=0; i<1000000000; i++){
        get_time();
    }
    return 0;
}
