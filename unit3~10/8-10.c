//문제 : 다음 소스 코드를 완성하여 1.800000 2.900000 3.700000과 4 8이 출력되게 만드세요.

#include <stdio.h>
#include <float.h>

int main()
{
    float num1 = 1.8;
    double num2 = 2.9;
    long double num3 = 3.7l;

    printf("%f %f %Lf\n",num1,num2,num3);

    printf("%d %d\n",sizeof(num1), sizeof(num2));

    return 0;
}