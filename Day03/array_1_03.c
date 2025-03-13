#include <stdio.h>

int main() {

	// ���ڸ� �����ϴ� �迭 
	char str[100] = "banana"; // ���ڸ� ������ ���� ���� �˳��ϰ�
	//char str2[5] = "apple"; --> �����߻�!
	char str2[6] = "apple";  // char �迭�� �����, ���ڱ��� + 1 ��ŭ�� ���� �ʿ��ϴ�.
	
	char str3[7] = { 'o','r','a','n','g','e'};

	//char str4[3]; // �����߻� => ���ڿ� �������� null�� �����ؾ���  
	char str4[4];

	str4[0] = 'a';
	str4[1] = 'b';
	str4[2] = 'c';
	str4[3] = '\0'; // '\0' null���� �ǹ�


	printf("str: %s\n", str); //str: banana 
	printf("str2: %s\n", str2); 
	// �����߻�!! => ���ڿ� ������ null�� �־����. �� ���̰� 6���� �Ǿ����.

	printf("str3: %s\n", str3);
	printf("str3[6]: %s\n", str3[6]); //str3[6]: (null)
	
	printf("str4: %s\n", str4); // => abc
	
	printf("str ������ ��: %s\n", str[10]); // (null) -> �������� null�� ó��
	


	//==============================
	// strcpy() 
	// str = st2;
	strcpy(str, str2); 
	printf("str: %s\n", str); //banana

	// str banana -> dog�� ��� 
	strcpy(str, "dog"); 
	printf("str: %s\n", str); // dog

	// �迭 0��°�� �ҹ���d -> �빮��'D'�� ����
	str[0] = 'D'; 
	printf("str: %s\n", str);  
		
	return 0;
}