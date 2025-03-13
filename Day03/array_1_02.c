# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>



int main() {

	int ary[] = { 1,2,3 };

	printf("배열의 전체 크기: %d\n", sizeof(ary));
	printf("배열 방 한개의 크기: %d\n", sizeof(ary[0]));
	printf("배열의 방 개수: %d\n", sizeof(ary)/sizeof(ary[0])); 
	printf("배열 이름: %p\n", ary); // 배열의 시작 주소. 즉, 주소값 //배열 이름: 000000F821DBF8C8
	printf("배열의 첫번째 방 주소: %p\n", &ary[0]);	// 0000002133AFF938
	printf("배열의 두번째 방 주소: %p\n", ary+1);	// 000000A6DB0FF96C
	// 4바이트 크기가 증가 => 주소값의 크기는 4바이트
	// 주소값은 연산이 이루어지x. 즉, 주소의 다음방을 가르킨다.
	printf("배열의 두번째 방 주소: %p\n", &ary[1]); // 두번째 방의 주소 값 -> 000000839172F94C

	// 정수 입력 받아서 합계 -> 총점 
	int sum = 0;
	int score[] = {0,0,0,0,0};
	int size = sizeof(score) / sizeof(score[0]);
	int avg = 0;

	printf("5과목의 점수를 입력하세요: >");
	for(int i = 0; i < 5; i++) {
		scanf_s("%d", &score[i]);
		printf("5과목의 점수 나열: %d\n", score[i]);
		sum += score[i];
		avg = sum / size;
	}
		printf("5과목의 합계: %d\n", sum);
		printf("5과목의 평균: %d\n", avg);
		
		
	return 0;
}
