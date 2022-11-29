#include <stdio.h>

int main()
{
    printf("%c, %d\n", 'a'+1, 'a'+1); // 1번
    printf("%c, %d\n", 97+1, 97+1); // 2번

    return 0;
}


// 1번
// 출력 => b, 98

// a는 ASCII 코드값 97이고, 
// 97에 1을 더하여 98이 되었으므로 b가 출력됨


// 2번
// 출력 => b, 98

// ASCII 코드값 97에 1을 더하여 98이 되었으므로 b가 출력됨


