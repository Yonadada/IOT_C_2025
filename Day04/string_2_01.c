#include <stdio.h>

/*
	puts, fputs - 전용 출력 함수
	stdout - 표준 출력 버퍼(스트림)
*/
int main() {
	char str[100] = "Delmonte orange";
	char* ps = "banana";

	printf("%s\n", str); //Delmonte orange //무겁다(출력이 상대적으로 느리다)
	puts(str);	//Delmonte orange -> 자동개행 // 전달받은 str을 바로 출력하기 때문에 가볍다(출력이 빠르다)
	fputs(str, stdout);	//Delmonte orangebanana --> 자동 개행 x
	puts(ps);
	fputs(ps, stdout); // banana





	return 0;
}