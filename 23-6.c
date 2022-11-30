/* 문제 : 다음 소스 코드를 완성하여 5, 4, 1, 250이 출력되도록 만드세요. */
#include <stdio.h>

int main()
{
    unsigned char num1 = 1; // 0000 0001
    unsigned char num2 = 5; // 0000 0101

    // printf("%u\n",num1 ___ num2);
    // printf("%u\n",num1 ___ num2);
    // printf("%u\n",num1 ___ num2);

    printf("%u\n",num1 | num2); //5
    printf("%u\n",num1 ^ num2); //4 : 0000 0100
    printf("%u\n",num1 & num2); //1


    // num1 =  ___ num2
    num1 = ~num2;
    printf("%u\n",num1); //250 : 1111 1010

    return 0;
}