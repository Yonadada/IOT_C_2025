//# include <stdio.h>
//
//int main() {
//	
//	int n = 10;
//	double res;
//
//	//res = n / 3;	// 결과값 => n / 3 = 3.0 
//	//res = (double)n / 3; // 결과값 => (double)n/3 = 3.3 => 결과값 double 형변환
//	
//	// 형변환은 가급적이면 사용하지 않고 처음부터 변수를 만들때 자료형을 지정하는게 좋다 
//	res = (double)n / 3.0; // 둘다 형변환을 하지 않고, 두개 중 1개만 형변환하자!
//	printf("res: %.1lf", res);
//
//
//	return 0;
//}
//
////num = 10
////str(num)