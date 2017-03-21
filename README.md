# About

A comparison of the call time between rdtsc and gettimeofday.

# Sample Output

```
$ make test
g++ -O3 -Wall -std=c++11 -o asm.out asm.cpp
g++ -O3 -Wall -std=c++11 -o gettimeofday.out gettimeofday.cpp
time -p ./asm.out && time -p ./gettimeofday.out
real 8.07
user 8.06
sys 0.00
real 19.49
user 19.46
sys 0.01
```
