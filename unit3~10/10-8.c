//문제) 다음 빈칸을(____) 채워 Hello, world! 76 -2147483647 4.528172가 출력되게 만드세요.

#include <stdio.h>

int main()
{
    /*
        printf("%s %o %lld %Lf\n", "Hello, world!", ______________________);
    */

    printf("%s %o %lld %Lf\n", "Hello, world!", 076, -2147483647LL, 4.528172L);

    return 0;
}

/*출력 결과
    Hello, world! 76 -2147483647 4.528172
*/