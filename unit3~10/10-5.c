//문제) 다음 빈칸을(____) 채워 10 3.200000 t가 출력되게 만드세요.

#include <stdio.h>

int main()
{
    /*
        const ①______________________________
        const ②______________________________
        const ③______________________________
    */

    const unsigned long long con1 = 10;
    const float con2 = 3.2f;
    const char con3 = 't'; 

    printf("%llu %f %c\n", con1, con2, con3);

    return 0;
}

/*출력 결과
    10 3.200000 t
*/