#include <stdio.h>

/* 
	���ڿ� - �ּ��� ������ �˼�����

	<DATA ����>
	�� - ����ڿ��� �Ҵ�� �޸� ����
	stack - �������� , �Ű�����
	Data - ��������, static
	Rod - ���ڿ� ���, ���ͷ�
	--------------------------
	�Լ�, ���
*/

int main() {
	
	char str[100] = "orange"; 

	printf("%s\n", str); //orange
	printf("%s\n", "orange"); //orange
	printf("%p\n", "orange"); //00007FF7F26AAC24
	printf("%c\n", *"orange"); //o
	printf("%c\n", *("orange"+ 1)); //r
	printf("%c\n", "orange"[2]); //a

	//"orange"[0] = 'O'; --> orange�� ���ͷ� ����̱� ������ ���ڸ� �ٲ� �� ����.
	*"orange" = 'O';
	printf("%s\n", str);


	return 0;
}

