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
	s.pf.age = 30;	//����ü �ȿ� ��������� ����ü 
	s.pf.height = 152.5;
	s.pf.weight = 70;


	printf("Ű: %.1lf\n", s.pf.height);
	printf("������: %.1lf\n", s.pf.weight);
	printf("���̵�: %d\n", s.id);
	
	


	return 0;   
}