#include <stdio.h>

int main()
{
    /*unsigned char자료형을 사용하는 이유 -> 부호없는 정수이며 1byte 
    비트 연산으로 인해 부호 비트가 영향을 받지 않도록 사용
    */
    unsigned char num1 = 1; // 2진수 : 0000 0001
    unsigned char num2 = 3; // 2진수 : 0000 0011
    unsigned char num3 = 162; // 2진수 :1010 0010

    printf("%d\n", num1 & num2); // 비트 AND 연산 : 0000 0001
    printf("%d\n", num1 | num2); // 비트 OR 연산 : 0000 0011
    printf("%d\n", num1^ num2); // 비트 XOR 연산 : 0000 0010 -> 두 비트가 같으면 0, 다르면 1

    printf("%d\n", ~num3); // 비트 NOT 연산 : 0101 1101 -> 비트 값을 반전한다.(0은 1로, 1은 0으로)



    return 0;
}