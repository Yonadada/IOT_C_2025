#include <stdio.h>

/*
	����������
*/

int main() {

	int n = 100;
	int* pn;
	int** ppn;	// ����������

	pn = &n;	// ���� n�� �ּҸ� ����
	ppn = &pn;	//�����ͺ��� pn�� �ּҸ� �����ϴ� ���� ������

	printf("n: %d\t n�ּ�: %p\n", n, &n); //a: 100   a�ּ�: 000000F1A534FAF4
	printf("pn: %p\t pn�� �ּ�: %p\t n��: %d\n", pn, &pn, *pn); 
	//pn: 0000005C6E5DF844     pn�� �ּ�: 0000005C6E5DF868     n��: 100

	printf("ppn: %p\t ppn�� �ּ�: %p\t  *ppn: %p\t  **ppn: %d\n", ppn, &ppn, *ppn, **ppn);
	//ppn: 000000C90074F5F8    ppn�� �ּ�: 000000C90074F618     *ppn: 000000C90074F5D4          **ppn: 100s

	return 0;



}