#include <stdio.h>

/*
	strncmp - ���ڿ� �� �Լ�
*/

int main() {

	char str[100] = "apple";
	char str2[100] = "orange";

	/* str �� ������ ���� ������ -1��ȯ, str2 ���� ������ 1��ȯ, ������ 0�� ��ȯ 
		�ڿ� ���� ũ�� 1, �տ� ���� ũ�� -1
	*/
	if (strcmp(str, str2) > 0) printf("%s\n", str); // str �� str2�� ������ �� str�� ũ�� -1, str2�� ũ�� 1�� ��ȯ�ϴµ�
	else printf("%s\n", str2);						// if������ str2�� ��ũ�� 0���� ũ�� ������ else���� Ÿ�� ����� orange ��µȴ�

	printf("a: %d\n", 'a'); //97
	printf("b: %d\n", 'b'); //98

	strncmp(str, str2, 3);
	printf("%s", str2);	//

	return 0;

}