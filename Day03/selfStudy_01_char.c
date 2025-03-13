# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

//대소문자 변환 프로그램입니다
//문자 1개 입력받기 -> 소문자->대문자 || 대문자 -> 소문자


int main() {

	char ch;

	printf("대소문자 변환 프로그램입니다\n");

	
	while (1) {
		printf("원하시는 문자 1개를 입력해주세요 > ");
		scanf("%c", &ch);
		printf("변경전 ch: %c\t", ch);

		// ch 대문자인 경우 -> 소문자로
		if ((ch >= 'A') && (ch <= 'Z')) {
			ch = ch + ('a' - 'A');
			printf("변경 후 ch2: %c\n", ch);
	
		}
		// ch 소문자인 경우 -> 대문자로 
		else if ((ch >= 'a') && (ch <= 'z')) {
			ch = ch - ('a' - 'A'); // 소문자 -(소문자-대문자) => 대문자
			printf("변경 후 ch2: %c\n", ch);
			break; // 결과 나오면 else 출력 안되게 break
		}
		else {
			printf("문자를 제대로 기입하시오");
		}
	}
	return 0;
}
	




