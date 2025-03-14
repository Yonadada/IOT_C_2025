#include <stdio.h>

/* 
	static
*/

void incFunc();
void incFunc2();

int main() {

	for (int i = 0; i < 5; i++) {
		incFunc();
		incFunc2();
	}
	//scnt++; //-> 에러발생~! 외부에서 정적변수의 접근을 불허한다.
			  //->(scnt는 incFunc2 안에서만 사용 가능)
			 //지역 변수이므로 incFunc2 밖에서는 접근할 수 없어! 
			 // (함수 외부에서 scnt++를 하면 에러 발생)
	return 0;
}

void incFunc() {	// cnt는 일반 지역 변수 
	int cnt = 0;  // 함수가 호출될 때마다 cnt가 0으로 초기화됨
	cnt++;		// cnt++ 때문에 1이 된 후 출력됨 
	printf("cnt: %d\t", cnt);	//하지만 다음 호출 때 다시 cnt = 0부터 시작하므로 
								//항상 cnt: 1이 출력됨
	
}

void incFunc2() {	// 정적지역변수(정저변수의 수정은 선언된 블록안에서만 가능하다)
	static int scnt = 0;	// 정적 지역 변수 (프로그램 실행 동안 단 1번만 초기화됨)
	scnt++;			//static 키워드 때문에 한 번만 초기화되고, 값이 유지됨
	printf("scnt: %d\n", scnt);	//첫 번째 호출에서는 scnt = 0에서 시작하지만,
								//이후에는 이전 값을 기억하고 +1씩 증가함
}

ㄴ