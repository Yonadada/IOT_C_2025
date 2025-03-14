#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	scanf, gets() 공백 가능
	stdin - 표준 입력 버퍼(입력 스트림)
*/
int main() {

	char str[100];

	/*printf("문자열 입력 >> ");
	scanf("%s", str);

	printf("처음 문자열: %s\n", str);
	scanf("%s", str);
	printf("다음 문자열: %s\n", str);*/

	//------
	// gets() 설명과 문제점(사용하지 말아야 하는 이유) 
	//	gets()는 입력 버퍼의 크기를 확인하지 않고 데이터를 받아들이기 때문에,
	//	버퍼 오버플로우(버퍼 초과 입력) 문제가 발생할 가능성이 높음.

	//printf("공백을 포함한 입력 >> ");
	//gets(str);	
	//gets() 함수는 C에서 문자열 입력을 받을 때 사용하는 함수 중 하나로,
	//공백을 포함한 한 줄의 문자열을 입력받을 때 사용됩니다.
	//printf("입력 문자열: %s\n", str);

	//-----
	// fgets()설명
	// gets() --> fgets() 사용을 권장!!
	printf("공백을 포함한 입력 >> ");
	fgets(str, sizeof(str), stdin);	// → sizeof(str) 만큼만 입력을 받아 버퍼 오버플로우 방지
	printf("입력 문자열: %s\n", str);	
	//개행 문자(\n)도 입력에 포함됨 → 필요하면 str[strcspn(str, "\n")] = '\0';로 개행 제거 가능


	//stdin --> 프로그램이 입력을 받을 때 사용하는 기본적인 입력 스트림
	//기본적으로 키보드에서 데이터를 읽어오는 역할을 합니다.
	
	return 0;
}