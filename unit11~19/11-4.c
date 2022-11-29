#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    char c1;

    /*문자 입력 1번 방법*/   
    // printf("문자 입력 : ");
    // scanf("%c", &c1);

    /*문자 입력 2번 방법*/
    c1 = getchar(); //실행하고 공백 깜박이는 곳에 문자 입력 후 엔터치면 출력됨


    printf("%c", c1);

    return 0;
}