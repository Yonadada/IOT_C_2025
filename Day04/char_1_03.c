#include <stdio.h>
/*
	문자열 상수는 주소를 의미 ->data segment에 저장된다
*/
int main() {
	
	char* ps = "orange";
	printf("ps가 가르키는 값: %s\n", ps); // orange

	ps = "banana";
	printf("ps가 가르키는 값: %s\n", ps); // banana

	return 0;
}