prog: main.o matrix.o
	g++ -o run main.o matrix.o

main.o: main.cpp matrix.h
	g++ -c -std=c++11 -Wall -g main.cpp

matrix.o: matrix.cpp matrix.h
	g++ -c -std=c++11 -Wall -g matrix.cpp

clean:
	rm -f rm main.o matrix.o

rebuild:
	make clean
	make
