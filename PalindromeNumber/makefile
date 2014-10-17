CC = g++
CFLAGS = -g -Wall

all:PalindromeNumber

PalindromeNumber:main.o
	$(CC) main.o -o PalindromeNumber

main.o:PalindromeNumber.cpp
	$(CC) $(CFLAGS) -c PalindromeNumber.cpp -o main.o

clean:
	rm -rf *.o