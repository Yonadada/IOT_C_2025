#include <stdio.h>

int main() {
	int ary[5];
	//int* pa = &ary; // �����߻� ->������ ������ ���� �ּҿ����� & ���´�.
	int* pa = ary;


	*(pa+0) = 10;
	printf("*pa: %d ary[0]: %d\n", *pa, ary[0]);
	printf("*pa: %d\n", pa+0); //*pa: 1880358104
	printf("pa + 1: %d\n", (pa + 1)); //1880358108 // 4�� ������ 
	
	*(pa + 1) = 20;
	printf("* (pa + 1): %d, ary[1]: %d\n", *(pa + 1), ary[1]);
	printf("pa[2]: %d\n", pa[1]);			// [�´°�] == *() : �����Ϳ����


	return 0;
}

//int main() {
//	int a = 10;
//	int* p = &a;  // p�� a�� �ּҸ� �����ϴ� ������
//
//	printf("a�� ��: %d\n", a);        // a�� ��
//	printf("a�� �ּ�: %p\n", &a);     // a�� �ּ�
//	printf("p�� ����Ű�� �ּ��� ��: %d\n", *p);  // p�� ����Ű�� �ּҿ� ����� �� (��, a�� ��)
//	return 0;
//}