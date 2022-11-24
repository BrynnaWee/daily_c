#include <stdio.h>

int main()
{
    printf("%ld\n", -10L);                       // long 크기의 정수 리터럴
    printf("%lld\n", -1234567890123456789LL);    // long long 크기의 정수 리터럴

    printf("%u\n", 10U);                         // unsigned int 크기의 정수 리터럴(int는 생략 가능)
    printf("%lu\n", 1234567890UL);               // unsigned long 크기의 정수 리터럴(long은 생략 불가능)

    printf("%lu\n", 10UL);                       // unsigned long 크기의 정수 리터럴
    printf("%llu\n", 1234567890123456789ULL);    // unsigned long long 크기의 정수 리터럴

    printf("0%lo\n", 017L);             // long 크기의 8진 정수 리터럴
    printf("0%lo\n", 017UL);            // unsigned long 크기의 8진 정수 리터럴
    printf("0x%lX\n", 0x7FFFFFL);       // long 크기의 16진 정수 리터럴
    printf("0x%lX\n", 0xFFFFFFFFUL);    // unsigned long 크기의 16진 정수 리터럴

    return 0;
}

/*출력 결과
    -10
    -1234567890123456789
    10
    1234567890
    10
    1234567890123456789

    017
    017
    0x7FFFFF
    0xFFFFFFFF
*/