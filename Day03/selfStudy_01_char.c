# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

//��ҹ��� ��ȯ ���α׷��Դϴ�
//���� 1�� �Է¹ޱ� -> �ҹ���->�빮�� || �빮�� -> �ҹ���


int main() {

	char ch;

	printf("��ҹ��� ��ȯ ���α׷��Դϴ�\n");

	
	while (1) {
		printf("���Ͻô� ���� 1���� �Է����ּ��� > ");
		scanf("%c", &ch);
		printf("������ ch: %c\t", ch);

		// ch �빮���� ��� -> �ҹ��ڷ�
		if ((ch >= 'A') && (ch <= 'Z')) {
			ch = ch + ('a' - 'A');
			printf("���� �� ch2: %c\n", ch);
	
		}
		// ch �ҹ����� ��� -> �빮�ڷ� 
		else if ((ch >= 'a') && (ch <= 'z')) {
			ch = ch - ('a' - 'A'); // �ҹ��� -(�ҹ���-�빮��) => �빮��
			printf("���� �� ch2: %c\n", ch);
			break; // ��� ������ else ��� �ȵǰ� break
		}
		else {
			printf("���ڸ� ����� �����Ͻÿ�");
		}
	}
	return 0;
}
	




