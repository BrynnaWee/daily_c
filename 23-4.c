/*비트 연산 후 할당*/
#include <stdio.h>

int main()
{
    unsigned char num1 = 4; // 0000 0100
    unsigned char num2 = 4;
    unsigned char num3 = 4;
    unsigned char num4 = 4;
    unsigned char num5 = 4;

    num1 &= 5; // num1&5 : AND 연산 후 다시 num1에 할당, 5 : 0000 0101
    num2 |= 2; // num2|2, 2(0000 0010)
    num3 ^= 3; // num3^3, 3(0000 0011)
    num4 <<= 2; // num4<<=2
    num5 >>= 2; // num5>>=2

    printf("%u\n", num1); //0000 0100 -> 4
    printf("%u\n", num2); //0000 0110 -> 6
    printf("%u\n", num3); // 0000 0111 -> 7
    printf("%u\n", num4); // 0001 0000 -> 16
    printf("%u\n", num5); // 0000 0001 -> 1

    return 0;
}