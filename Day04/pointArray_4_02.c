#include <stdio.h>

int main() {

	int* pray[3];	//int Ÿ���� �ּҸ� ������ �� �ִ� ����Ʈ �迭
	int ary1[2] = { 1,2 };
	int ary2[2] = { 3,4 };
	int ary3[2] = { 5,6 };

	pray[0] = ary1;
	pray[1] = ary2;
	pray[2] = ary3;		//int* pray[3] = {ary1, ary2, ary3};

	return 0;
}