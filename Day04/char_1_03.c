#include <stdio.h>
/*
	���ڿ� ����� �ּҸ� �ǹ� ->data segment�� ����ȴ�
*/
int main() {
	
	char* ps = "orange";
	printf("ps�� ����Ű�� ��: %s\n", ps); // orange

	ps = "banana";
	printf("ps�� ����Ű�� ��: %s\n", ps); // banana

	return 0;
}