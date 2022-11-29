#include <stdio.h>

int main(){

    char str;

    scanf("%c", &str);

    if(str == 'a') // c1 =='a' 대신 c1 == 97처럼 a의 ASCII 코드값 97로 비교해도 됩니다.
    {
        printf("a입니다.\n");
    }
    else
    {
        printf("a가 아닙니다.\n");
    }

    return 0;
}