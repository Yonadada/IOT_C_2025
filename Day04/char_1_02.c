#include <stdio.h>

/* 
	문자열 - 주소의 시작을 알수있음

	<DATA 영역>
	힙 - 사용자에게 할당된 메모리 영역
	stack - 지역변수 , 매개변수
	Data - 전역변수, static
	Rod - 문자열 상수, 리터럴
	--------------------------
	함수, 제어문
*/

int main() {
	
	char str[100] = "orange"; 

	printf("%s\n", str); //orange
	printf("%s\n", "orange"); //orange
	printf("%p\n", "orange"); //00007FF7F26AAC24
	printf("%c\n", *"orange"); //o
	printf("%c\n", *("orange"+ 1)); //r
	printf("%c\n", "orange"[2]); //a

	//"orange"[0] = 'O'; --> orange는 리터럴 상수이기 때문에 문자를 바꿀 수 없다.
	*"orange" = 'O';
	printf("%s\n", str);


	return 0;
}

