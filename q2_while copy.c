#include <stdio.h>

int main(void)
{
   int num = 0;
   int odd_total_num = 0;
   int even_total_num = 0;
   
   printf("1 ~ 100사이 숫자를 입력 하세요 : \n");
   scanf("%d", &num);

   if(num <= 100) {
        for(num; num>=1; num--){
            if(num % 2 == 1) {
                odd_total_num = odd_total_num + num;
            }
            else if(num % 2 == 0){
                even_total_num = even_total_num + num;
            }
        }
        printf("홀수 값의 총 합계 : %d \n",odd_total_num);
        printf("짝수 값의 총 합계 : %d \n",even_total_num);
   }
   else {
        printf("입력값이 100이 넘습니다\n");
   }
}