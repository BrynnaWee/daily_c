//문제) 다음 소스 코드를 완성하여 "Hello   world"가 각 줄에 두 번 출력되게 만드세요
// ("Hello"와 "world" 사이는 탭으로 띄웁니다).

#include <stdio.h>

int main()
{
    char c1;
    char c2;
    char c3;

    /*작성 영역 시작*/
    c1 = '\t';
    c2 = '\n';
    c3 = '\t';
    /*작성 영역 끝*/

    printf("Hello%cworld%cHello%cworld\n", c1, c2, c3);

    return 0;
}

/*
출력 결과

Hello   world
Hello   world
*/