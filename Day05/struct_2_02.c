#include <stdio.h>
/*
	
*/

struct mystruct {
	int num;
	double grade;

};

int main() {

	struct mystruct m;
	m.num = 100;
	m.grade = 99.9;
	
	printf("num: %d, grade: %.1f", m.num, m.grade);

	return 0;
}