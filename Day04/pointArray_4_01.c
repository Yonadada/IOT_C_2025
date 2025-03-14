#include <stdio.h>

/*
	포인터 배열: 배열(포인토를 저장 할 수 있는 배열)
	배열 포인터: 포인터(배열을 가르키는 포인터)
*/

int main() {

	//char* 을 5개 저장할 수 있는 포인터 배열
	char* pray[5] = { "dog", "tigger", "lion", "apple","banana"}; 
	char* pray2[3];

	pray[0] = "abcd";
	pray[1] = "efg";
	pray[2] = "hijk";

	for (int i = 0; i < 5; i++) {
		printf("%s\n", pray[i]);
	}


	return 0;
}