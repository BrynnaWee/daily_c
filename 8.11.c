//문제 : 다음 소스 코드를 완성하여 각 실수 자료형의 최솟값과 최댓값이 출력되게 만드세요.

#include <stdio.h>
#include <float.h>

int main()
{
    double doubleMin;
    double doubleMax;
    long double longDoubleMin;
    long double longDoubleMax;

    doubleMin = DBL_MIN;
    doubleMax = DBL_MAX;
    longDoubleMin = LDBL_MIN;
    longDoubleMax = LDBL_MAX;

    printf("%e %d\n", doubleMin, doubleMax);
    printf("%Le %Le\n", longDoubleMin, longDoubleMax);

    return 0;

}