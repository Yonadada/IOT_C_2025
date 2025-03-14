#include <stdio.h>

/*
	이중포인터
*/

int main() {

	int n = 100;
	int* pn;
	int** ppn;	// 이중포인터

	pn = &n;	// 변수 n의 주소를 저장
	ppn = &pn;	//포인터변수 pn의 주소를 저장하는 이중 포인터

	printf("n: %d\t n주소: %p\n", n, &n); //a: 100   a주소: 000000F1A534FAF4
	printf("pn: %p\t pn의 주소: %p\t n값: %d\n", pn, &pn, *pn); 
	//pn: 0000005C6E5DF844     pn의 주소: 0000005C6E5DF868     n값: 100

	printf("ppn: %p\t ppn의 주소: %p\t  *ppn: %p\t  **ppn: %d\n", ppn, &ppn, *ppn, **ppn);
	//ppn: 000000C90074F5F8    ppn의 주소: 000000C90074F618     *ppn: 000000C90074F5D4          **ppn: 100s

	return 0;



}