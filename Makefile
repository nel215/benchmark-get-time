asm.out: asm.cpp
	g++ -O3 -Wall -std=c++11 -o asm.out asm.cpp
gettimeofday.out: gettimeofday.cpp
	g++ -O3 -Wall -std=c++11 -o gettimeofday.out gettimeofday.cpp
test: asm.out gettimeofday.out
	time -p ./asm.out && time -p ./gettimeofday.out
clean:
	rm -f *.out

