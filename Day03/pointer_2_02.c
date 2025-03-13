#include <stdio.h>

int main() {

	char ch;
	int n;
	char* pch = &ch;
	int* pn = &n;

	// 포인터 변수의 크기는 == 주소크기와 같다!!!
	printf("char 주소 크기: %d\t", sizeof(&ch)); //주소 크기: 8  
	printf("int 주소 크기: %d\n", sizeof(&n)); //int 주소 크기: 
	printf("char 포인트 크기: %d\t", sizeof(&pch)); //char 포인트 크기: 8 
	printf("int 포인트 크기: %d\n", sizeof(&pn));	//int 포인트 크기: 8

	//1kbit =1024^3 //1kbyte -> 1024byte // mgbyte -> 2^20 //gbyte -> 2^30 //4gbyte -> 2^32



	return 0;
}