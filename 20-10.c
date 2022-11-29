/*문제
표준 입력으로 두 정수가 입력됩니다. 다음 조건대로 입력된 두 정수를 검사하여 결과를 출력하는 프로그램을 만드세요(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다).

두 정수를 AND 연산했을 때 참이면 "참", 거짓이면 "거짓"
두 정수를 OR 연산했을 때 참이면 "참", 거짓이면 "거짓"
첫번째 정수를 NOT 연산했을 때 참이면"참", 거짓이면 "거짓"
*/

#include <stdio.h>

int main()
{
    int num1;
    int num2;

    scanf("%d",&num1);
    scanf("%d",&num2);

    printf("%s\n", num1&&num2 ? "참":"거짓");
    printf("%s\n", num1||num2 ? "참":"거짓");
    printf("%s\n", !num1 ? "참":"거짓");

    return 0;
}