#include <stdio.h>

int main() {

	// 문자를 저장하는 배열 
	char str[100] = "banana"; // 문자를 저장할 때는 길이 넉넉하게
	//char str2[5] = "apple"; --> 오류발생!
	char str2[6] = "apple";  // char 배열에 저장시, 문자길이 + 1 만큼의 방이 필요하다.
	
	char str3[7] = { 'o','r','a','n','g','e'};

	//char str4[3]; // 에러발생 => 문자열 마지막은 null값 존재해야함  
	char str4[4];

	str4[0] = 'a';
	str4[1] = 'b';
	str4[2] = 'c';
	str4[3] = '\0'; // '\0' null값을 의미


	printf("str: %s\n", str); //str: banana 
	printf("str2: %s\n", str2); 
	// 오류발생!! => 문자열 끝에는 null이 있어야함. 즉 길이가 6개가 되어야함.

	printf("str3: %s\n", str3);
	printf("str3[6]: %s\n", str3[6]); //str3[6]: (null)
	
	printf("str4: %s\n", str4); // => abc
	
	printf("str 나머지 방: %s\n", str[10]); // (null) -> 나머지는 null로 처리
	


	//==============================
	// strcpy() 
	// str = st2;
	strcpy(str, str2); 
	printf("str: %s\n", str); //banana

	// str banana -> dog로 출력 
	strcpy(str, "dog"); 
	printf("str: %s\n", str); // dog

	// 배열 0번째에 소문자d -> 대문자'D'로 변경
	str[0] = 'D'; 
	printf("str: %s\n", str);  
		
	return 0;
}