//#include <stdio.h>
//
//int main(){
//	int i = 0;
//	for (int i = 0; i <= 10; i++) {
//		if (i % 2 == 0) continue; //건너뛴다
//		
//		// if(i == 7) break; // 반복문을 빠져나간다
//		if (i >= 7) break;  //혹시나 발생될 수 있는 예외를 고려한 조건문 작성
//		printf("i: %d\n", i); // 1 3 5
//	}
//	return 0;	
//}
////for문은 반복되는 구간이 정해져 있을 때 사용
//// 
////경우의 수가 작을 때 -> case
//// switch-case문을 사용할 때는 마지막에 break문을 사용, default문은 생략이 가능
////
////그 외는 if문을 사용
//// if if if문 에러가 발생할 수 있다.
////
//// while은 조건이 참일때 무한 반복
//// while(1) : 무한루프 , for(;;) : 무한루프
//
////break는 자신과 가장 가까운 반복문을 빠져나간다.
////continue는 자신과 가장 가까운 반복문의 조건식으로 이동한다.
