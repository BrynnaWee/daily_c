#include <stdio.h>

int main()
{
    printf("%c\n", 'a');                // a: 문자 리터럴
    printf("%s\n", "Hello, world!");    // Hello, world!: 문자열 리터럴

    printf("%d\n", 10);        // 10: 정수 리터럴
    printf("%f\n", 0.1f);      // 0.100000: 실수 리터럴
    printf("%d\n", 19);        // 19: 10진 정수 리터럴
    printf("0%o\n", 017);      // 017: 8진 정수 리터럴
    printf("0x%X\n", 0x1F);    // 0x1F: 16진 정수 리터럴

    //실수는 출력하면, 소숫점 이하 6자리까지 빈자리를 0으로 메꿔서 출력된다.
    printf("%f\n", 0.1f);       // 0.100000: 0.1을 실수 리터럴 소수점 표기(뒤에 0이 5개 붙음)
    printf("%f\n", 0.1F);       // 0.100000: 실수 리터럴 소수점 표기
    printf("%f\n", 1.0e-5f);    // 0.000010: 실수 리터럴 지수 표기법
    printf("%f\n", 1.0E-5F);    // 0.000010: 실수 리터럴 지수 표기법
    printf("%f\n", 0.11f);      // 0.110000: 0.11을 실수 리터럴 소수점 표기(뒤에 0이 4개 붙음)
    return 0;
}