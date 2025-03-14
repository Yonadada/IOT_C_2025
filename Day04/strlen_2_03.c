#include <stdio.h>

/*
	strlen - 문자열 길이를 계산
*/

int main() {

	char str[100] = "apple";

	printf("str 문자열 길: %d", strlen(str)); //5 --> 문자열 마지막 null 포함x
	
	return 0;
}