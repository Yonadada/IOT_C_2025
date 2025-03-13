#include <stdio.h>

/* const */

int main() {

	const int num = 10;

	int num2 = 10;
	num2 = 20;

	int* pnum2 = &num2;
	*pnum2 = 30;
	printf("%d", num2); // num2 = 30 출력


	const int* pn2 = &num2;		// 데이터 상수(포인터 변수를 통한 데이터의 변경을 불허한다)
	num2 = 0;
	//*pn2 = 100; // 에러발생!	// 포인터가 가르키는 곳에 데이터 삽입 x
	pn2 = &num2;


	int num3 = 40;
	int* const pnum3 = &num3;	// 포인터 상수(포인터 변수가 가르키는 주소의 변경을 불허한다)
	*pnum3 = 100;
	printf("%d\n", num3);
	//pnum3 = &num2  // 에러발생 

	const int* const pn5 = &num2; 
	//*pn5 = 100; // 에러발생 
	//pn5 = &num3; 
	num2 = 40;

	return 0;
}