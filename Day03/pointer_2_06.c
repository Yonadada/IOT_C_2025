#include <stdio.h>


void inputAry(int *, int);
void printAry(int *, int );

int main() {
	//int ary[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int ary2[] = { 1,2,3 };
	
	//int size = sizeof(ary) / sizeof(ary[0]);

	//�Է� �迭
	int ary3[] = {0,0,0,0,0,0,0,0};
	int len = sizeof(ary3) / sizeof(ary3[0]);

	//������ �Է� �Լ�
	inputAry(ary3, len);
	
	
	//������ ��� �Լ�
	//printAry(ary , size);
	printAry(ary3 , len);

	return 0;

}

//������ �Է� ��� 
void inputAry(int *add, int _len) {
	printf("���Ͻô� ���� 8���� �����ϼ��� > ");
	int i;
	for (i = 0; i < _len; i++) {
		scanf_s("%d", &add[i]);
	}

}

//������ ��� ���
//�迭 , �迭 ������
void printAry(int *p , int _size) { 
	
	int i;
	for (i = 0; i < _size; i++) {
		printf("ary3[%d]: %d\n", i, p[i]);
	}

}
