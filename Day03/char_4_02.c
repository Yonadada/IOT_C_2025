#include <stdio.h>

/*
	getchar, putchar -> ���� ���� �Լ�
*/

int main() {

	int ch;  
	//char ch; // �������¸� ���ڷ� 
	
	ch = getchar();	// �� ���ڸ� '�о�'���� �Լ� // ��ġ....scanf ���� �� ������ 
	
	//putchar('\n');
	putchar(ch);	// �� ���ڸ� '���'�ϴ� �Լ� //��ġ....printf ���� �� ������ 

	printf("input: %d\n", ch); //%d ->  97  //%c -> ���� 
	
	

	return 0;
}