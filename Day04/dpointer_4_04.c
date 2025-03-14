#include <stdio.h>


void printAry(char**, int);

int main() {

	char* ary[] = { "mango", "apple","banana" };

	printAry(ary, 3);


	return 0;
}

void printAry(char** pray, int size) {

	for (int i = 0; i < size; i++) {
		printf("%s\n", *(pray+i));
	}
}