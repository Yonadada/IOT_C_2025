#include <stdio.h>

/*
	������ �迭: �迭(�����並 ���� �� �� �ִ� �迭)
	�迭 ������: ������(�迭�� ����Ű�� ������)
*/

int main() {

	//char* �� 5�� ������ �� �ִ� ������ �迭
	char* pray[5] = { "dog", "tigger", "lion", "apple","banana"}; 
	char* pray2[3];

	pray[0] = "abcd";
	pray[1] = "efg";
	pray[2] = "hijk";

	for (int i = 0; i < 5; i++) {
		printf("%s\n", pray[i]);
	}


	return 0;
}