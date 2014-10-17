CC = g++
CFLAGS = -g -Wall

all:SymmetricTree

SymmetricTree:main.o
	$(CC) main.o -o SymmetricTree

main.o:SymmetricTree.cpp
	$(CC) $(CFLAGS) -c SymmetricTree.cpp -o main.o

clean:
	rm -rf *.o