#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;
	char ch;

	scanf("%d", &a);
	//2 => getchar(); //문자 개행 없애기
	scanf(" %c", &ch); //1 => scanf(" %c", &ch); //문자 개행 없애기

	//1. 방법) 문자열을 입력받는 scanf("띄움 %c", ) 한 칸 띄어쓰기를 해주어야 한다.
	//2. 방법) getchar() 함수를 사용하여 문자를 입력받는다.
	return 0;
}