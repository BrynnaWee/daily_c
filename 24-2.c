/*shift연산으로 자릿수를 넘어설 때*/
#include <stdio.h>

int main()
{
    unsigned char num1 = 240; // 1111 0000
    unsigned char num2 = 15; // 0000 1111

    unsigned char num3, num4;

    num3 = num1 << 2;
    num4 = num2 >> 2;
  
    printf("%u\n", num3); // 11 1100 0000 -> 1100 0000 -> 128+64 = 192
    printf("%u\n", num4); // 0000 0011 11 -> 0000 0011 -> 2+1 = 3

    return 0;
}