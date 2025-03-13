#include <stdio.h>


void inputAry(int *, int);
void printAry(int *, int );

int main() {
	//int ary[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int ary2[] = { 1,2,3 };
	
	//int size = sizeof(ary) / sizeof(ary[0]);

	//입력 배열
	int ary3[] = {0,0,0,0,0,0,0,0};
	int len = sizeof(ary3) / sizeof(ary3[0]);

	//포인터 입력 함수
	inputAry(ary3, len);
	
	
	//포인터 출력 함수
	//printAry(ary , size);
	printAry(ary3 , len);

	return 0;

}

//포인터 입력 제어문 
void inputAry(int *add, int _len) {
	printf("원하시는 숫자 8개만 기입하세요 > ");
	int i;
	for (i = 0; i < _len; i++) {
		scanf_s("%d", &add[i]);
	}

}

//포인터 출력 제어문
//배열 , 배열 사이즈
void printAry(int *p , int _size) { 
	
	int i;
	for (i = 0; i < _size; i++) {
		printf("ary3[%d]: %d\n", i, p[i]);
	}

}
