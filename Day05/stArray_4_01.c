#include <stdio.h>

typedef struct addr {

	char name[20];
	int age;
	char tel[20];
	char addr[100];

} Addr;

// **����ü �����͸� ����Ͽ� ����Ʈ ���**
void print_list(Addr* list, int size) { //(���� ��� �Լ�)
	for (int i = 0; i < size; i++) {
		printf("%s, %d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}
}


int main() {
	Addr list[3] = {
		{"ȫ�浿", 100, "010-1234-5678","����" },
		{ "�迵��", 33, "010-2222-2222", "�λ�" },
		{ "�����", 24, "010-3333-3333", "���" }
};

	
	// **print_list() �Լ� ȣ��**
	print_list(list, 3); //addr ����ü�� 3�� ������ �� �ִ� �迭�� ���� ��


	return 0;
}

