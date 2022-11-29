#include <stdio.h>

int main()
{
    char c1 = 'a'; // 문자 a 할당
    char c2 = 'b'; // 문자 b 할당 
    char lineFeed = '\n';  // 제어 문자 \n 할당

    // 제어 문자도 %c로 출력할 수 있음
    printf("%c%c%c%c", c1, lineFeed, c2, lineFeed);

    return 0;
}

// 변수 lineFeed에 제어 문자 '\n'를 넣은 뒤 printf에서 %c로 출력해보면 
// a와 b사이에 줄바꿈이 되는 것을 볼 수 있습니다. 
// 즉, 작은따옴표로 제어 문자를 넣고 printf에서 %c로 출력하면 해당 제어 문자가 동작합니다.