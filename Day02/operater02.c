//#include <stdio.h>
//
//int main() {
//	int n = 10, n2 = 20;
//	int res;
//
//	res = (n < n2) ? n : n2; // 삼항연산자 : 조건식 ? 참일때 값 : 거짓일때 값
//	printf("res : %d\n", res); //res : 10
//
//	res = (n > n2) ? n : n2;
//	printf("res : %d\n", res); //res : 20
//
//	// 증감연산자
//	// 후의연산자 : n++ -> n을 사용하고 1을 증가시킨다.
//	//printf("n++ :%d\n", n++); //n++ : 10
//	//printf("n :%d\n", n); //n : 11
//
//	// 전의연산자 : ++n -> n을 1증가시키고 사용한다.
//	//printf("++n :%d\n", ++n); //++n : 12
//
//	// Ex ----------
//	res = n++; // res = n, n = n + 1
//	printf("res : %d, n : %d\n", res, n); //res : 10, n : 11
//
//	res = ++n2; // n2 = n2 + 1, res = n2
//	printf("res : %d, n2 : %d\n", res, n2); //res : 21, n2 : 21
//
//
//
//
//	return 0;
//}
//
// 제어문
//1. 선택제어문(1. if, 2. switch)	
//
//2. 반복제어문(1. for, 2. while, 3. do while)