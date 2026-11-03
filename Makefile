CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: question1 question2

question1: question1.c
	$(CC) $(CFLAGS) question1.c -o question1

question2: question2.c
	$(CC) $(CFLAGS) question2.c -o question2

clean:
	rm -f question1 question2