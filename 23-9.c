/* 문제 : 표준 입력으로 정수가 입력됩니다. 
입력된 정수를 왼쪽으로 20번, 오른쪽으로 4번 시프트 연산하여 
결과를 출력하는 프로그램을 만드세요(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다). 

단, 정수형 변수는 unsigned long long으로 선언하고 출력 결과는 서식 지정자 %llu를 사용하세요. */

#include <stdio.h>

int main()
{
    unsigned long long num1;

    scanf("%llu", &num1);

    // num1 <<= 20;
    // num1 >>= 4;

    num1 = num1 << 20 >> 4;

    printf("%llu\n", num1);

    return 0;
}