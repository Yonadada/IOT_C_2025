#include <stdio.h>

/*
	배열포인터 : 포인터
*/

int main() {

	/*int a = 10;
	int* pa = &a;*/

	/*int ary[] = { 1,2,3 };
	int(* pary) = ary; */ // 배열을 가르키는 포인터이고, () 생략가능 
	//1차원 배열을 가르키는 포인터 vs 일반 배열을 가르키는 포인터

	int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} }; //2차원 배열
	//int** pary = ary; //2차원 배열을 가르키는 포인터라고 말할 수 없다. -> 지정해줘야함 / 
	int(*pary)[4];
	pary = ary;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d", pary[i][j]);
		}
		printf("\n");
		//-결과-
		// 1234
		// 5678
		// 9101112

	
	}
	//2차원 배열에서 중요한것은 행보다 열이 중요함!
	//int art[][2] = {{1,2},{3,8}
	




	//int(* pary)[4]; //-> int형 변수 4개의 배열을 가르키는 배열포인터

	//int* pary[4];	//포인터 배열(int형 변수4개를 가르키는 포인터)

	return 0;
}