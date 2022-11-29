/*문제
표준 입력으로 문자가 입력됩니다. 다음 조건대로 입력된 문자를 검사하여 결과를 출력하는 프로그램을 만드세요(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다).

문자가 k와 다르면 "참", 같으면 "거짓"
문자가 h보다 크면 "참", 작거나 같으면 "거짓"
문자가 o보다 작거나 같으면 "참", 크면 "거짓"

*/

#include <stdio.h>

int main()
{
    char str;
    char result;

    scanf("%s",&str);

    printf("%s\n", str != 'k' ? "참" : "거짓");
    printf("%s\n", str>'h' ? "참" : "거짓");
    printf("%s\n", str<='o' ? "참" : "거짓");

    return 0;
}