#include <stdio.h>

int main(void)
{
   int num = 0;
   int odd_total_num = 0;
   int even_total_num = 0;
   
   printf("1 ~ 100���� ���ڸ� �Է� �ϼ��� : \n");
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
        printf("Ȧ�� ���� �� �հ� : %d \n",odd_total_num);
        printf("¦�� ���� �� �հ� : %d \n",even_total_num);
   }
   else {
        printf("�Է°��� 100�� �ѽ��ϴ�\n");
   }
}