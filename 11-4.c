// #define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    /*문자 입력 1번 방법*/
    // char c1;
    // printf("문자 입력 : ");
    // scanf("%c", &c1);

    char c1 = 'a';
    /*문자 입력 2번 방법*/
    putchar(c1);

    // printf("%c", c1);

    return 0;
}