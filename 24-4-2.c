#include <stdio.h>

int main()
{
    unsigned char flag = 7; // 0000 0111

    flag &= ~2; // 2 : 0000 0010 => ~2 : 1111 1101 // 비트 AND로 일곱번째 비트를 끔.

    printf("%u\n", flag); // 0000 0101이 됨 -> 십진수로 변환하면 5가 된다.

    if(flag & 1) // &연산자 : 해당 비트의 플래그가 켜져있는지 확인. // 0000 0001의 비트가 켜져있는지 확인한다.
        printf("0000 0001 flag 켜져있음(on)\n");
    else
        printf("0000 0001 flag 꺼져있음(off)\n");
    
    if(flag & 2) // &연산자로 0000 0010 비트가 켜져있는지 확인한다.
        printf("0000 0010 flag 켜져있음(on)\n");
    else
        printf("0000 0010 flag 꺼져있음(off)\n");
   
    if(flag & 4) // &연산자로 0000 0100 비트가 켜져있는지 확인한다. 
        printf("0000 0100 flag 켜져있음(on)\n");
    else
        printf("0000 0100 flag 꺼져있음(off)\n");

    return 0;
}