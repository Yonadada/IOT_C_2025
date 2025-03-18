
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	int inputVal;

	printf("정수를 입력하세요: "); // 안내메세지를 따로 출력해야함
	scanf("%d", &inputVal); // 
	
	// scanf를 사용할 시 &를 사용하여 주소연산자 가르키게 해야함 
	/* 입력 - scanf()*/

	printf("입력한 정수는 %d 입니다", inputVal);

	int n1, n2;
	
	printf("두개의 정수를 입력하세요");
	scanf_s("%d %d", &n1, &n2);  
	printf("입력한 두 값은 %d, %d 입니다\n", n1,n2);
	


	return 0;
}
