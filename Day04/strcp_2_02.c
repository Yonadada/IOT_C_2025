#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
	strcpy - ���ڿ� ���� �Լ�
*/


int main() {

	char str[100] = "orange";
	char str2[100] = "apple";
	char* ps = "apple";

	printf("str: %s\n", str);
	printf("str2: %s\n", str2);
	
	strcpy(str, str2);	// (����, ����)
	printf("str: %s\n", str);
	printf("str2: %s\n", str2);
	
	strcpy(str, "banana");
	printf("str: %s\n", str);


	strcpy(str, ps);
	printf("str: %s\n", str);

	//strcpy(ps, str2);	 // -> �����߻�
	//printf("ps: %s", ps);

	strcpy(str,"abcee", 3); // �����ּҺ��� ������ ���ڰ����� ���� �� �� �ִ�
	printf("%s\n", str);


	//=======���� -> ���� ���ڿ����� ���� ����?
	

	return 0;
}

