
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	int inputVal;

	printf("������ �Է��ϼ���: "); // �ȳ��޼����� ���� ����ؾ���
	scanf("%d", &inputVal); // 
	
	// scanf�� ����� �� &�� ����Ͽ� �ּҿ����� ����Ű�� �ؾ��� 
	/* �Է� - scanf()*/

	printf("�Է��� ������ %d �Դϴ�", inputVal);

	int n1, n2;
	
	printf("�ΰ��� ������ �Է��ϼ���");
	scanf_s("%d %d", &n1, &n2);  
	printf("�Է��� �� ���� %d, %d �Դϴ�\n", n1,n2);
	


	return 0;
}
