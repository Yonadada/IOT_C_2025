#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;
	char ch;

	scanf("%d", &a);
	//2 => getchar(); //���� ���� ���ֱ�
	scanf(" %c", &ch); //1 => scanf(" %c", &ch); //���� ���� ���ֱ�

	//1. ���) ���ڿ��� �Է¹޴� scanf("��� %c", ) �� ĭ ���⸦ ���־�� �Ѵ�.
	//2. ���) getchar() �Լ��� ����Ͽ� ���ڸ� �Է¹޴´�.
	return 0;
}