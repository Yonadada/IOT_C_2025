///* 변수 선언 */
//#include <stdio.h>
//	
//int main() {
//
//	// 자료형 변수명 -> (int)형 크기를 저장할 수 있는 num이라는 공간을 할당
//	int num;	
//	num = 10;
//	//(Lvalue)-변수/ 리터럴 값이 올 수 없다! EX) 10 = num; --> 잘못됨
//	//(Rvalue)-정수(실제값-리터럴), 변수
//	int num2 = 10;
//	num = num2;
//
//	char ch = 'A'; //문자타입의 변수 선언
//	double db = 3.14; // float보다 double이 표현할 수 있는 숫자가 
//						 //더 많기 때문에double을 사용한다.
//
//	printf("num의 값 : %d\n", num);
//	printf("num2의 값 : %d\n", num2);
//	printf("ch의 값 : %c\n", ch);
//
//	return 0;
//}