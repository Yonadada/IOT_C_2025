#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct vision {
    double left;
    double right;

    void move() {};
    //void move() {}; // c++Ÿ���� ����ü Ÿ�� 

} Vision;

// **exchange �Լ�: ���ʰ� ������ �÷��� �ٲ㼭 ��ȯ**

Vision exchange(Vision);

int main() {
    Vision rot;

    // **�Է� �ޱ�**
    printf("�÷� �Է� (���� ������)>>> ");
    scanf("%.1lf %.1lf", &(rot.left), &(rot.right));  // �ùٸ� scanf ����

    // **�÷� ��ȯ**
   //rot = exchange(rot);

    // **��� ���**
    printf("�ٲ� �÷�: ���� %.1lf, ������ %.1lf\n", rot.left, rot.right);

    return 0;
}