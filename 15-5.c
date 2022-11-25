#include <stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    num %= 10;
    printf("%d", num);   
    num /= 10;

    num %= 10;
    printf("%d", num);   
    num /= 10;

    num %= 10;
    printf("%d", num);   
    num /= 10;

    num %= 10;
    printf("%d", num);   
    num /= 10;

    num %= 10;
    printf("%d", num);   

    return 0;
}