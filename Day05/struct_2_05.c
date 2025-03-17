#include <stdio.h>

typedef int int32mt; //자료형을 다른 자료형으러 선언하는것을 typedef


struct human {

	char name[100];
	int32mt age; //int 형을 int32mt로 바꾸겠다.
};

typedef struct myst {
	int a;
	int b;

} Myst;




int main() {

	//struct human h = {"홍여원",30};
	//struct human h2 = { "홍나다", 3 };
	struct human h = { "홍길동", 100 },	// 동일한 타입 연속적으로 선언할때 
		h2 = { "이순신", 110 },
		h3 = { "김유신", 200 };

	int n1 = 100, n2 = 200, n3 = 300;

	Myst m;





	return 0;
}