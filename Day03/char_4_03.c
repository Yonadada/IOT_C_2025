#include <stdio.h>

/*
	대문자, 소문자 변환
*/

int main() {

	char ch1;
	char ch2 = 'C';

	//아스키코드 비교
	if ((ch2 >= 'A') && (ch2 <= 'Z')) {
		ch1 = ch2 + ('a' - 'A');	 //대문자 + (소문자 - 대문자)
	}
	printf("대문자: %c\t", ch2);
	printf("소문자: % c\n", ch1);

	
	return 0;
}