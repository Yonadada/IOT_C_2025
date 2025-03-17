#include <stdio.h>

struct profile {
	int age;
	double height;
	double weight;
};

struct student {
	struct profile pf;
	int id;
	double grade;
};

int main() {
	struct student s;
	s.grade = 20;
	s.id = 20150106;
	s.pf.age = 30;	//구조체 안에 멤버변수로 구조체 
	s.pf.height = 152.5;
	s.pf.weight = 70;


	printf("키: %.1lf\n", s.pf.height);
	printf("몸무게: %.1lf\n", s.pf.weight);
	printf("아이디: %d\n", s.id);
	
	


	return 0;   
}