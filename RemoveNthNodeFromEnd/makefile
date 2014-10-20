CC = g++
CFLAGS = -g -Wall

all:RemoveNthNodeFromEnd

RemoveNthNodeFromEnd:main.o
	$(CC) main.o -o RemoveNthNodeFromEnd

main.o:RemoveNthNodeFromEnd.cpp
	$(CC) $(CFLAGS) -c RemoveNthNodeFromEnd.cpp -o main.o

clean:
	rm -rf *.o