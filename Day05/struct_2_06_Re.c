#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct vision {
    double left;
    double right;

    void move() {};
    //void move() {}; // c++타입의 구조체 타입 

} Vision;

// **exchange 함수: 왼쪽과 오른쪽 시력을 바꿔서 반환**

Vision exchange(Vision);

int main() {
    Vision rot;

    // **입력 받기**
    printf("시력 입력 (왼쪽 오른쪽)>>> ");
    scanf("%.1lf %.1lf", &(rot.left), &(rot.right));  // 올바른 scanf 형식

    // **시력 교환**
   //rot = exchange(rot);

    // **결과 출력**
    printf("바뀐 시력: 왼쪽 %.1lf, 오른쪽 %.1lf\n", rot.left, rot.right);

    return 0;
}