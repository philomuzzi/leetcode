CC = g++
CFLAGS = -g -Wall

all:MergeSortedArray

MergeSortedArray:main.o
	$(CC) main.o -o MergeSortedArray

main.o:MergeSortedArray.cpp
	$(CC) $(CFLAGS) -c MergeSortedArray.cpp -o main.o

clean:
	rm -rf *.o