CC = g++
CFLAGS = -g -Wall

all:ValidPalindrome

ValidPalindrome:main.o
	$(CC) main.o -o ValidPalindrome

main.o:ValidPalindrome.cpp
	$(CC) $(CFLAGS) -c ValidPalindrome.cpp -o main.o

clean:
	rm -rf *.o