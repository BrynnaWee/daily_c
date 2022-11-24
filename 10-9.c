//문제) 다음 빈칸을(____) 채워 -2.225074e-308 0x1285 9223372036854775807가 출력되게 만드세요.

#include <stdio.h>

int main()
{
    /*
        const ______________________;
    */

    const long double con1 = -2.225074e-308L;

    const int con2 = 0x1285;
    const long long con3 = 9223372036854775807LL;
 
    printf("%Le 0x%x %lld\n", con1, con2, con3);

    return 0;
}

/*출력 결과
    -2.225074e-308 0x1285 9223372036854775807
*/