CC = gcc
CFLAGS = -Wall -Wextra -I include -I libs/AdiLinkedList/include

all:
	$(CC) $(CFLAGS) tests.c src/ABI.c libs/AdiLinkedList/src/AdiLinkedList.c -o bin/tests

clean: bin/tests
	rm bin/tests

	