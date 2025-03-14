#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
	strcpy - 문자열 복사 함수
*/


int main() {

	char str[100] = "orange";
	char str2[100] = "apple";
	char* ps = "apple";

	printf("str: %s\n", str);
	printf("str2: %s\n", str2);
	
	strcpy(str, str2);	// (복사, 원본)
	printf("str: %s\n", str);
	printf("str2: %s\n", str2);
	
	strcpy(str, "banana");
	printf("str: %s\n", str);


	strcpy(str, ps);
	printf("str: %s\n", str);

	//strcpy(ps, str2);	 // -> 에러발생
	//printf("ps: %s", ps);

	strcpy(str,"abcee", 3); // 시작주소부터 복사할 문자개수를 설정 할 수 있다
	printf("%s\n", str);


	//=======문제 -> 원본 문자열에서 문자 복사?
	

	return 0;
}

