CC = g++
CFLAGS = -g -Wall

all:ReverseInteger

ReverseInteger:main.o
	$(CC) main.o -o ReverseInteger

main.o:ReverseInteger.cpp
	$(CC) $(CFLAGS) -c ReverseInteger.cpp -o main.o

clean:
	rm -rf *.o