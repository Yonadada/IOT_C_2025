#include <stdio.h>

typedef int int32mt; //�ڷ����� �ٸ� �ڷ������� �����ϴ°��� typedef


struct human {

	char name[100];
	int32mt age; //int ���� int32mt�� �ٲٰڴ�.
};

typedef struct myst {
	int a;
	int b;

} Myst;




int main() {

	//struct human h = {"ȫ����",30};
	//struct human h2 = { "ȫ����", 3 };
	struct human h = { "ȫ�浿", 100 },	// ������ Ÿ�� ���������� �����Ҷ� 
		h2 = { "�̼���", 110 },
		h3 = { "������", 200 };

	int n1 = 100, n2 = 200, n3 = 300;

	Myst m;





	return 0;
}