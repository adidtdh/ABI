test: 
	gcc -Iinclude src/ABI.c libs/AdiLinkedList/src/AdiLinkedList.c tests.c -o bin/test