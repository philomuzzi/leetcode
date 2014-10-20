CC = g++
CFLAGS = -g -Wall

all:SameTree

SameTree:main.o
	$(CC) main.o -o SameTree

main.o:SameTree.cpp
	$(CC) $(CFLAGS) -c SameTree.cpp -o main.o

clean:
	rm -rf *.o