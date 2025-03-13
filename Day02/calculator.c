#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 연산 함수 선언
int func1(int, int);
int func2(int, int);
int func3(int, int);
int func4(int, int);


int main() {

	int n1, n2;
	char op;
	int result = 0;

	printf("계산기 프로그램입니다\n");
	printf("두 개의 정수를 입력하세요\n");
	scanf("%d %d", &n1, &n2);

	while (1) {
		printf("연산자를 입력하세요 > +,-,*,/,Q\n ");
		scanf(" %c", &op);


		if (op == '+' || op == '-' || op == '*' || op == '/' || op == 'Q') {
			break;
		}
		else {
			printf("연산자를 다시 입력하세요\n");
		}
	}//while() 끝
	
	// 연산수행
	if (op == '+') result = func1(n1, n2);
	else if (op == '-') result = func2(n1, n2);
	else if (op == '*') result = func3(n1, n2);
	else if (op == '/') result = func4(n1, n2);
	else if (op == 'Q') return 0;

	// 결과 출력
	printf("결과: %d %c %d = %d\n", n1, op, n2, result);

	return 0;
		
}//main() 끝






//함수 정의
// 덧셈 함수
int func1(int a, int b) {
	printf("%d + %d = %d\n", a, b, a+b);
	return a + b;
}

// 뺄셈 함수
int func2(int a, int b) {
	printf("%d - %d = %d\n", a, b, a - b);
	return  a - b;
}

// 곱셈 함수
int func3(int a, int b) {
	int res = a * b;
	printf("%d * %d = %d\n", a, b, a * b);
	return a * b;

}

// 나눗셈 함수
int func4(int a, int b) {
	if (b == 0) {
		printf("0으로 나눌 수 없음!!!\n");
	}
	return 0;

	printf("%d / %d = %d\n", a, b, a / b);
	return a / b;
}