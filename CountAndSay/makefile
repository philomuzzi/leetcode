CC = g++
CFLAGS = -g -Wall

all:CountAndSay

CountAndSay:main.o
	$(CC) main.o -o CountAndSay

main.o:CountAndSay.cpp
	$(CC) $(CFLAGS) -c CountAndSay.cpp -o main.o

clean:
	rm -rf *.o