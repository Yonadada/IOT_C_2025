#include <stdio.h>

/*
	getchar, putchar -> 문자 전용 함수
*/

int main() {

	int ch;  
	//char ch; // 정수형태를 문자로 
	
	ch = getchar();	// 한 문자를 '읽어'오는 함수 // 마치....scanf 같은 고런 느낌스 
	
	//putchar('\n');
	putchar(ch);	// 한 문자를 '출력'하는 함수 //마치....printf 같은 고런 느낌스 

	printf("input: %d\n", ch); //%d ->  97  //%c -> 문자 
	
	

	return 0;
}