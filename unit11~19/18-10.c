/*문제
 * 표준 입력으로 국어, 영어, 수학, 과학 점수가 입력됩니다. 여기서 네 과목의 평균 점수가 85점 이상일 때 합격이라고 정했습니다. 평균 점수에 따라 "합격", "불합격"을 출력하는 프로그램을 만드세요(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다). 단, 점수는 0점부터 100점까지만 입력받을 수 있으며 범위를 벗어났다면 "잘못된 점수"를 출력하고 합격, 불합격 여부는 출력하지 않아야 합니다.
 */

#include <stdio.h>

int main()
{
    int korean;
    int english;
    int math;
    int science;
    int average;

    scanf("%d",&korean);
    scanf("%d",&english);
    scanf("%d",&math);
    scanf("%d",&science);

    if(korean>100||korean<0||english>100||english<0||math>100||math<0||science>100||science<0)
    {
        printf("잘못된 점수\n");
    }
    else
    {
        average = (korean+english+math+science)/4;
        if(average>=85)
            printf("합격\n");
        else
            printf("불합격\n");
    }

    return 0;
}
