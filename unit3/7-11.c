#include <stdio.h>

int main()
{
    char num1;
    short int num2;

    printf("%d\n",sizeof(num1)+sizeof(num2)+sizeof(long long));

    return 0;
}

//출력 결과
//11