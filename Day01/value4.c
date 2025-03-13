///* 배열 
//   동일한 자료형을 연속적으로 저장할 수 있는 공간
//*/
//# include <stdio.h>
//
//int main() {
//
//	char str[10] = "banana";	// 문자타입 배열 선언 및 초기화
//
//	printf("str: %s\n", str);
//	printf("str[0]: %c\n", str[0]);
//	printf("str[1]: %c\n", str[1]);
//	printf("str[5]: %c\n", str[5]);
//	printf("str[6]: %c\n", str[6]);
//	//printf("str[6]: %s\n", str[6]); // 문자열 끝에는 null 문자가 온다.
//
//	char str2[6] = "apple";  //배열 이름 자체가 주소를 나타낸다
//	printf("str2: %s\n", str2); 
//
//	str2[0] = 'A';
//	printf("str2 : %s\n", str2);
//
//	return 0;
//}
//
//// 제어문 - 반복(for, while, do while), 조건(if, switch)
//// 배열의 시작주소 -> 0번 부터 시작 
//// 