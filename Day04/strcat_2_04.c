#include <stdio.h>

/*
	strcat - 문자열을 붙히는 함수
*/
int main() {

	char str[100] = "apple";
	strcat(str, "banana");
	printf("%s\n", str); //applebanana

	strcat(str, "orange", 3);
	printf("%s\n", str); //applebananaorange


	return 0;
}