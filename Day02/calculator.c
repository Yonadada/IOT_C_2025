#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���� �Լ� ����
int func1(int, int);
int func2(int, int);
int func3(int, int);
int func4(int, int);


int main() {

	int n1, n2;
	char op;
	int result = 0;

	printf("���� ���α׷��Դϴ�\n");
	printf("�� ���� ������ �Է��ϼ���\n");
	scanf("%d %d", &n1, &n2);

	while (1) {
		printf("�����ڸ� �Է��ϼ��� > +,-,*,/,Q\n ");
		scanf(" %c", &op);


		if (op == '+' || op == '-' || op == '*' || op == '/' || op == 'Q') {
			break;
		}
		else {
			printf("�����ڸ� �ٽ� �Է��ϼ���\n");
		}
	}//while() ��
	
	// �������
	if (op == '+') result = func1(n1, n2);
	else if (op == '-') result = func2(n1, n2);
	else if (op == '*') result = func3(n1, n2);
	else if (op == '/') result = func4(n1, n2);
	else if (op == 'Q') return 0;

	// ��� ���
	printf("���: %d %c %d = %d\n", n1, op, n2, result);

	return 0;
		
}//main() ��






//�Լ� ����
// ���� �Լ�
int func1(int a, int b) {
	printf("%d + %d = %d\n", a, b, a+b);
	return a + b;
}

// ���� �Լ�
int func2(int a, int b) {
	printf("%d - %d = %d\n", a, b, a - b);
	return  a - b;
}

// ���� �Լ�
int func3(int a, int b) {
	int res = a * b;
	printf("%d * %d = %d\n", a, b, a * b);
	return a * b;

}

// ������ �Լ�
int func4(int a, int b) {
	if (b == 0) {
		printf("0���� ���� �� ����!!!\n");
	}
	return 0;

	printf("%d / %d = %d\n", a, b, a / b);
	return a / b;
}