#include <stdio.h>

int main() {

	char ch;
	int n;
	char* pch = &ch;
	int* pn = &n;

	// ������ ������ ũ��� == �ּ�ũ��� ����!!!
	printf("char �ּ� ũ��: %d\t", sizeof(&ch)); //�ּ� ũ��: 8  
	printf("int �ּ� ũ��: %d\n", sizeof(&n)); //int �ּ� ũ��: 
	printf("char ����Ʈ ũ��: %d\t", sizeof(&pch)); //char ����Ʈ ũ��: 8 
	printf("int ����Ʈ ũ��: %d\n", sizeof(&pn));	//int ����Ʈ ũ��: 8

	//1kbit =1024^3 //1kbyte -> 1024byte // mgbyte -> 2^20 //gbyte -> 2^30 //4gbyte -> 2^32



	return 0;
}