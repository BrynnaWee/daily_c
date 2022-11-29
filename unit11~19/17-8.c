/*문제 : 표준 입력으로 나이(만 나이)가 입력됩니다. 
여기서 콘텐츠를 보여주기 전에 나이에 따라 제한 문구를 출력하고자 합니다. 
만 18세 미만이면 "청소년 관람 불가"를 출력하는 프로그램을 만드세요.
(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int age;
    scanf("%d", &age);

    if(age < 18){
        printf("청소년 관람 불가\n");
    }

    return 0;
}