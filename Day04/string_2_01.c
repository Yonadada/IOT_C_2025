#include <stdio.h>

/*
	puts, fputs - ���� ��� �Լ�
	stdout - ǥ�� ��� ����(��Ʈ��)
*/
int main() {
	char str[100] = "Delmonte orange";
	char* ps = "banana";

	printf("%s\n", str); //Delmonte orange //���̴�(����� ��������� ������)
	puts(str);	//Delmonte orange -> �ڵ����� // ���޹��� str�� �ٷ� ����ϱ� ������ ������(����� ������)
	fputs(str, stdout);	//Delmonte orangebanana --> �ڵ� ���� x
	puts(ps);
	fputs(ps, stdout); // banana





	return 0;
}