#include <stdio.h>

/*
	����ü ������ :
	�������ظ��� ���� �ʿ�
*/
typedef struct score {
	int kor;
	int eng;
	int mat;

} Score; 


int main() {

	Score s = { 100, 80, 85 };
	Score* ps = &s;

	printf("����: %d\n", ps->kor);
	printf("����: %d\n", ps->eng);
	printf("����: %d\n", (*ps).mat); 

	return 0;
}

/*
	����ü ������ ���ؼ� ����� �����ϴ� �����?	.(������� ������, ��Ʈ������)�̴�
	����ü �����͸� ���ؼ� ����� �����ϴ� �����?	 ->(ȭ��ǥ ������)�̴�
*/