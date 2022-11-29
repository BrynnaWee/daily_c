//문제) "Hello   world"가 출력되게 만드세요("Hello"와 "world" 사이는 탭으로 띄웁니다).

#include <stdio.h>

int main()
{
    char c1 = '\t';

    printf("Hello");
    printf("%c", c1);
    printf("world");

    return 0;
}
