#include <stdio.h>

int main()
{
    //signed 키워드가 생략되었으므로 모두 부호 있음.
    //short이나 long은 보통 int를 생략함.
    char num1 = -10;
    short num2 = 3000;
    int num3 = 1234567890;
    long num4 = 1234567890;
    long long num5 = -1234567890123456789;
    
    printf("%d %d %d %ld %lld\n",num1, num2, num3, num4, num5);
    return 0;

}