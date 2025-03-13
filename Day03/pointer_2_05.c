#include <stdio.h>

int main() {
	int ary[5];
	//int* pa = &ary; // 에러발생 ->포인터 선언한 곳에 주소연산자 & 못온다.
	int* pa = ary;


	*(pa+0) = 10;
	printf("*pa: %d ary[0]: %d\n", *pa, ary[0]);
	printf("*pa: %d\n", pa+0); //*pa: 1880358104
	printf("pa + 1: %d\n", (pa + 1)); //1880358108 // 4가 증가함 
	
	*(pa + 1) = 20;
	printf("* (pa + 1): %d, ary[1]: %d\n", *(pa + 1), ary[1]);
	printf("pa[2]: %d\n", pa[1]);			// [맞는곳] == *() : 포인터연산식


	return 0;
}

//int main() {
//	int a = 10;
//	int* p = &a;  // p는 a의 주소를 저장하는 포인터
//
//	printf("a의 값: %d\n", a);        // a의 값
//	printf("a의 주소: %p\n", &a);     // a의 주소
//	printf("p가 가리키는 주소의 값: %d\n", *p);  // p가 가리키는 주소에 저장된 값 (즉, a의 값)
//	return 0;
//}