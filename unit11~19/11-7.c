#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int num1;
    float num2;
    char c1;

    // printf("정수, 실수, 문자를 차례대로 입력하세요");
    scanf("%d %f %c", &num1, &num2, &c1);
    printf("%d\n%f\n%c\n", num1, num2, &c1);

    return 0;
}