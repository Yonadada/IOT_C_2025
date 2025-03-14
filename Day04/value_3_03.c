#include <stdio.h>
/*
	2차원 배열 
*/

int main() {
	//1차원 배열
	int ary[4] = { 1,2,3,4 };

	//2차원 배열
	int ary2[3][2] = { {1,2},{3,4},{5,6} };

	//3차원 배열
	int ary3[3][4] = { {1,2},{3,4,5},{6,7,8,9} }; // 없는 경우 자동으로 0으로 채워짐 

	int ary4[3][2] = { 1,2,3,4,5,6 };

	int ary5[][4] = { {1,2,3,4},{5,6,7,8} };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d", ary2[i][j]);	//123456
		}
	}

	// 4사람의 국,영,수 (총점, 평균) -> 2차원 배열 사용
	int sum = 0;
	int score[4][3];


	printf("학생의 국어,영어,수학 점수를 입력하세요 >\n");
	for (int i = 0; i < 1; i++) { //i번째
		scanf("%d %d %d", i, &score);
		for (int j = 0; j < score[j]; j++) { //j과목 
			sum += score[j];
			printf("%번째 학생의 국&영&수는 총%d점 입니다\n", i, sum[j]);
		}

	}
	return 0;
}