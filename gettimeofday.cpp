#include <sys/time.h>
#include <cstdio>

inline double get_time(){
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return tv.tv_sec + tv.tv_usec*1e-6;
}

int main(){
    for(int i=0; i<1000000000; i++){
        get_time();
    }
    return 0;
}
