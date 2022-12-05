#include <stdio.h>

int main()
{
    unsigned char flag = 0;

    flag |= 1; // 0000 0001 마스크와 비트 OR로 8번째 비트를 on
    flag |= 2; // 0000 0010 마스크와 비트 OR로 7번째 비트를 on
    flag |= 4; // 0000 0100 마스크와 비트 OR로 6번째 비트를 on

    printf("%u\n", flag);  /*7이 나옴. 
                            위에서 6~8번째의 비트를 켰기 때문에 flag는 0000 0111이 되고
                            십진수로 변환하면 7이 됨. 
                            */
    
    if(flag & 1) // &연산자 : 해당 비트의 플래그가 켜져있는지 확인하는 연산자.
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