//#include <stdio.h>
//
//int main() {
//	int n = 10, n2 = 20;
//	int res;
//
//	res = (n < n2) ? n : n2; // ���׿����� : ���ǽ� ? ���϶� �� : �����϶� ��
//	printf("res : %d\n", res); //res : 10
//
//	res = (n > n2) ? n : n2;
//	printf("res : %d\n", res); //res : 20
//
//	// ����������
//	// ���ǿ����� : n++ -> n�� ����ϰ� 1�� ������Ų��.
//	//printf("n++ :%d\n", n++); //n++ : 10
//	//printf("n :%d\n", n); //n : 11
//
//	// ���ǿ����� : ++n -> n�� 1������Ű�� ����Ѵ�.
//	//printf("++n :%d\n", ++n); //++n : 12
//
//	// Ex ----------
//	res = n++; // res = n, n = n + 1
//	printf("res : %d, n : %d\n", res, n); //res : 10, n : 11
//
//	res = ++n2; // n2 = n2 + 1, res = n2
//	printf("res : %d, n2 : %d\n", res, n2); //res : 21, n2 : 21
//
//
//
//
//	return 0;
//}
//
// ���
//1. �������(1. if, 2. switch)	
//
//2. �ݺ����(1. for, 2. while, 3. do while)