# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>



int main() {

	int ary[] = { 1,2,3 };

	printf("�迭�� ��ü ũ��: %d\n", sizeof(ary));
	printf("�迭 �� �Ѱ��� ũ��: %d\n", sizeof(ary[0]));
	printf("�迭�� �� ����: %d\n", sizeof(ary)/sizeof(ary[0])); 
	printf("�迭 �̸�: %p\n", ary); // �迭�� ���� �ּ�. ��, �ּҰ� //�迭 �̸�: 000000F821DBF8C8
	printf("�迭�� ù��° �� �ּ�: %p\n", &ary[0]);	// 0000002133AFF938
	printf("�迭�� �ι�° �� �ּ�: %p\n", ary+1);	// 000000A6DB0FF96C
	// 4����Ʈ ũ�Ⱑ ���� => �ּҰ��� ũ��� 4����Ʈ
	// �ּҰ��� ������ �̷����x. ��, �ּ��� �������� ����Ų��.
	printf("�迭�� �ι�° �� �ּ�: %p\n", &ary[1]); // �ι�° ���� �ּ� �� -> 000000839172F94C

	// ���� �Է� �޾Ƽ� �հ� -> ���� 
	int sum = 0;
	int score[] = {0,0,0,0,0};
	int size = sizeof(score) / sizeof(score[0]);
	int avg = 0;

	printf("5������ ������ �Է��ϼ���: >");
	for(int i = 0; i < 5; i++) {
		scanf_s("%d", &score[i]);
		printf("5������ ���� ����: %d\n", score[i]);
		sum += score[i];
		avg = sum / size;
	}
		printf("5������ �հ�: %d\n", sum);
		printf("5������ ���: %d\n", avg);
		
		
	return 0;
}
