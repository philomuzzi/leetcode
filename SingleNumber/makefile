CC = g++
CFLAGS = -g -Wall

all:SingleNumber

SingleNumber:main.o
	$(CC) main.o -o SingleNumber

main.o:SingleNumber.cpp
	$(CC) $(CFLAGS) -c SingleNumber.cpp -o main.o

clean:
	rm -rf *.o