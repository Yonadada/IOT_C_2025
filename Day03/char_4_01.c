#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	����
*/
int main() {

	char ch1;
	char ch2 = ' ';

	scanf(" %c %c", &ch1, &ch2); //�齺���̽�, ���� => ���ڷ� ���
	getchar();


	printf("[%c%c]", ch1, ch2); //a b -> [a ] ab -> [a,b]


	return 0;
}