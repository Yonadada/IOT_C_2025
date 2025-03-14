#include <stdio.h>
//전역변수: 프로그램 전체
//지역변수 : 블록안에서만 사용, 매개변수, 자동 변수->지역변수는 스택에 저장
//정적변수 : 전역 + 지역


void incFunc(); //int 

//int  cnt = 0; // 전역변수와 지역변수 이름이 같을 경우, 지역변수에 뭍혀버린다.
int cnt;  // 초기화 하지 않은 경우 -> 0으로 자동 초기화 된다.
int main() {
		
	//int cnt = 0;					// local 지역변수
	for (int i = 0; i < 5; i++) {
		incFunc(cnt);
		printf("cnt: %d\n", cnt);

	}
	cnt++;
	printf("cnt: %d\n", cnt);
	return 0;
}

void incFunc(){ //int cnt
	cnt++;	//incFunc() 안에 변수가 없는경우. 즉,(지역변수를 사용하지 않은 경우) ->  전역변수를 사용
	printf("incFunc cnt: %d\n", cnt);
}