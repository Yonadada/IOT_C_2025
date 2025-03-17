#include <stdio.h>
#include <string.h>
/*
   struct(구조체) - 사용자 정의 자료형
   기존 자료형을 묶어서 만든 복합 자료형(타입) * 타입은 크기를 의미
*/

struct Human {            // 구조체 선언 (struct 구조체형{};)
	char name[100];         // 멤버변수
	int age;            // 멤버변수
};

int main() {
	/*  .은 멤버 접근연산자이다  */
	struct Human h;     // Human 구조체의 변수 h 선언 (struct Human은 자료형!)
						// 구조체를 사용하기 위해서 변수 사용, 하지만 메모리 공간에 할당되어 있으면 직접 접근
	h.age = 30;			// h 객체의 멤버 age에 30을 ㅈㅓ장한다.
	//h.name = "홍여원"; --> 에러발생~!!
	strcpy(h.name, "홍여원");
	
	//char str[100] = "홍여원";
	//printf("%s\n", str);
	char str2[100];
	//str2 = "nada"; // 에러발생!! -> Lvalue(변수), Rvalue(리터럴-상수)가 와야하는데 str2는 주소값 즉, 상수이기 때문에 에러발생!
	

	printf("나의 이름은 %s이고, 나이는 %d입니다", h.age, h.name);
	return 0;
}