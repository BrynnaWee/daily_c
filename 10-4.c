//문제) 다음 빈칸을(____) 채워 Hello, world! 8 4.900000e-302가 출력되게 만드세요.

#include <stdio.h>

int main()
{
    // printf("H%cllo, %s %d %Le\n",___________________ );

    printf("H%cllo, %s %d %Le\n", 'e', "world!", 8, 4.9e-302L);

    return 0;
}

/*출력 결과
    Hello, world! 8 4.900000e-302
*/