#include <stdio.h>

/*
	strncmp - 문자열 비교 함수
*/

int main() {

	char str[100] = "apple";
	char str2[100] = "orange";

	/* str 이 사전에 먼저 나오면 -1반환, str2 먼저 나오면 1반환, 같으면 0을 반환 
		뒤에 것이 크면 1, 앞에 것이 크면 -1
	*/
	if (strcmp(str, str2) > 0) printf("%s\n", str); // str 이 str2를 비교했을 때 str이 크면 -1, str2가 크면 1을 반환하는데
	else printf("%s\n", str2);						// if문에서 str2가 더크고 0보다 크기 때문에 else문을 타고 결과는 orange 출력된다

	printf("a: %d\n", 'a'); //97
	printf("b: %d\n", 'b'); //98

	strncmp(str, str2, 3);
	printf("%s", str2);	//

	return 0;

}