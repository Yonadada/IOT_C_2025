#include <stdio.h>

typedef struct addr {

	char name[20];
	int age;
	char tel[20];
	char addr[100];

} Addr;

// **구조체 포인터를 사용하여 리스트 출력**
void print_list(Addr* list, int size) { //(정보 출력 함수)
	for (int i = 0; i < size; i++) {
		printf("%s, %d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}
}


int main() {
	Addr list[3] = {
		{"홍길동", 100, "010-1234-5678","몰라" },
		{ "김영희", 33, "010-2222-2222", "부산" },
		{ "김민희", 24, "010-3333-3333", "울산" }
};

	
	// **print_list() 함수 호출**
	print_list(list, 3); //addr 구조체를 3개 저장할 수 있는 배열을 만든 거


	return 0;
}

