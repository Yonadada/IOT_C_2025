#include <stdio.h>
//��������: ���α׷� ��ü
//�������� : ��Ͼȿ����� ���, �Ű�����, �ڵ� ����->���������� ���ÿ� ����
//�������� : ���� + ����


void incFunc(); //int 

//int  cnt = 0; // ���������� �������� �̸��� ���� ���, ���������� ����������.
int cnt;  // �ʱ�ȭ ���� ���� ��� -> 0���� �ڵ� �ʱ�ȭ �ȴ�.
int main() {
		
	//int cnt = 0;					// local ��������
	for (int i = 0; i < 5; i++) {
		incFunc(cnt);
		printf("cnt: %d\n", cnt);

	}
	cnt++;
	printf("cnt: %d\n", cnt);
	return 0;
}

void incFunc(){ //int cnt
	cnt++;	//incFunc() �ȿ� ������ ���°��. ��,(���������� ������� ���� ���) ->  ���������� ���
	printf("incFunc cnt: %d\n", cnt);
}