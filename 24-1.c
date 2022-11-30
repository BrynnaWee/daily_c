/*shift연산자를 사용해 거듭제곱 구하기*/
#include <stdio.h>

int main()
{
    unsigned char num = 1; // 0000 0001 -> 1

    printf("%u\n", num <<1); // 0000 0010 -> 2
    printf("%u\n", num <<2); // 0000 0100 -> 4
    printf("%u\n", num <<3); // 0000 1000 -> 8
    printf("%u\n", num <<4); // 0001 0000 -> 16
    printf("%u\n", num <<5); // 0010 0000 -> 32
    printf("%u\n", num <<6); // 0100 0000 -> 64
    printf("%u\n", num <<7); // 1000 0000 -> 128

    return 0;
}