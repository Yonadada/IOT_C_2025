//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//// 컴퓨터는 0이 아닌 값은 참으로 인식한다.(즉, 기준이 0이고 0은 거짓으로 인식한다)
//// ex) -1은 참
//int main() {
//	int n = 30;
//	int res;
//
//	res = (n > 10) && (n < 20);  //논리연산자 A && B : A와 B가 모두 참이면 참, 아니면 거짓
//	printf("res : %d\n", res);
//	
//	res = (n < 10) || (n > 20);  //논리연산자 A || B : A와 B 중 하나라도 참이면 참, 아니면 거짓
//	printf("res : %d\n", res); //res : 1 , Ture(참)
//
//	res = (n >= 30); // 복합 대입연산자
//	printf("res : %d\n", res); 
//
//	res = !(n > 30);
//	printf("res : %d\n", res);
//	
//	res = ~(n > 30);	// ~는 1의 보수 연산자 -> 0을 1로, 1을 0으로 바꾼다.
//	printf("res : %d\n", res); //res : -1
//	res = ~n; // 2의 보수 연산자 -> 0을 1로, 1을 0으로 바꾼 후 1을 더한다.
//	printf("res : %d\n", res); //res : -31
//
//	res = n << 1; // 비트 이동 연산자 : 왼쪽으로 1비트 이동
//	printf("res: %x\n", res); //res: 3c 
//	// -> 30을 2진수로 바꾸면 11110이다.
//	// 이를 왼쪽으로 1비트 이동하면 111100이 되고 이는 16진수로 3c이다.
//	// 맨 오른쪽에 빈자리는 0으로 추가된다
//
//	// 우측,좌측 이동은 다르다!!!
//
//	res = res >> 1; // 비트 이동 연산자 : 오른쪽으로 1비트 이동
//	printf("res: %x\n", res); //res: 1e 
//	// **부호비트에 따라서 우측으로 이동할때 부호비트가 1이면 1로 채워지고 0이면 0으로 채워진다.
//
//	// 우측,좌측 예
//	int n2 = 143;	// 0b 1000 1111
//	res = n2 << 1;	// 0b 1 0001 1110 
//	printf("res: %x\n", res); //res: 1e6
//
//	res = n2 >> 1;	//0b 1000 1111 -> 0b 1100 0111
//	printf("res: %x\n", res);//res:127
//
//
//
//	return 0;
//}