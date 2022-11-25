#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    float num1;

    printf("실수를 입력하세요 : ");
    scanf("%f", &num1);

    printf("%f", num1);

    return 0;
}

/*참고
    여기서 변수를 double로 선언했다면 scanf에는 서식 지정자로 %lf를 넣고, 
    long double로 선언했다면 %Lf를 넣습니다.
    (double은 printf로 출력할 때 %f를 써도 되지만 scanf는 %lf를 써야 합니다).


    double num1;
    scanf("%lf", &num1);    // 자료형이 double일 때는 %lf

    long double num2;
    scanf("%Lf", &num2);    // 자료형이 long double일 때는 %Lf
*/