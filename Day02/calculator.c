#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int n1, n2;
	//char op;

	printf("���� ���α׷��Դϴ�\n");
	printf("�� ���� ������ �Է��ϼ���\n");

	scanf("%d %d", &n1, &n2);
	printf("�� ������ %d %d �Դϴ�\n", n1, n2);

	return 0;
}


//	while (1) {
//		printf("�����ڸ� �Է��ϼ���\n");
//		scanf_s("%c", &op, sizeof(op));
//		scanf("%c", &op);
//
//		if (op == '+' || op == '-' || op == '*' || op == '/') {
//			break;
//		}
//		else {
//			printf("�����ڸ� �ٽ� �Է��ϼ���\n");
//		}
//
//
//		switch (op) {
//		case '+':
//			func1(n1, n2); break;
//		case '-':
//			func2(n1, n2); break;
//		case '*':
//			func3(n1, n2); break;
//		case '/':
//			func4(n1, n2); break;
//		}
//		return 0;
//	}
//}
//
//int func1(int a, int b) {
//	int res = a + b;
//	printf("%d %c %d = %d\n", a, b, res);
//	return res;
//}
//int func2(int a, int b) {
//	int res = a - b;
//	printf("%d %c %d = %d\n", a, b, res);
//	return res;
//}
//int func3(int a, int b) {
//	int res = a * b;
//	printf("%d %c %d = %d\n", a, b, res);
//	return res;
//
//}
//int func4(int a, int b) {
//	int res = a / b;
//	printf("%d %c %d = %d\n", a, b, res);
//	return res;
//}