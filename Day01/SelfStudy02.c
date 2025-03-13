#define _CRT_SECURE_NO_WARNINGS // scanf 함수 사용시 경고를 무시하기 위한 매크로
#include <stdio.h>

int main() {
	char name[20]; // 문자열 입력은 배열을 통해 받을 수 있어야함
	int age;
	printf("나이를 입력해주세요");
	scanf("%d", &age);	// 고정된 타입은 크기를 지정 안해도 됨
	
	printf("이름을 입력해주세요");
	scanf("%s", name); 
	// 문자열이기 때문에 배열의 크기를 지정해야함
	// name은 배열 이름은 주소를 나타내기 때문에 &(주소연산자) 를 붙이지 않음
	printf("나이는 %d 이름은 %s 입니다",age,name);

	return 0;
}

// A && B -> 논리연산자 
//A || B -> 논리연산자

// A & B -> 비트연산자 and 연산
//A | B -> 비트연산자	or 연산