//문제 : 다음 소스 코드를 완성하여 -inf가 출력되게 만드세요.

#include <stdio.h>
#include <float.h>

int main ()
{
    float num1 = -FLT_MAX;
    num1 = num1 * 1000.0f;

    printf("%f\n", num1);


    return 0;
}

//해설
//float형 변수 num1에 1000.0f를 곱하여 오버플로우가 발생했고 -inf가 출력되었습니다.
//이때 음의 무한대인 -inf가 되려면 float의 최댓값인 FLT_MAX에 -를 붙여서 음수로 만들어주면 됩니다.