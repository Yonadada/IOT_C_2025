#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	문자
*/
int main() {

	char ch1;
	char ch2 = ' ';

	scanf(" %c %c", &ch1, &ch2); //백스페이스, 앤터 => 문자로 취급
	getchar();


	printf("[%c%c]", ch1, ch2); //a b -> [a ] ab -> [a,b]


	return 0;
}