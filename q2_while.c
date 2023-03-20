// 표준 입력 출력 stdio.h 파일을 인클루드
#include <stdio.h>

// 매개변수가 없는 main함수 출력. 리턴값의 형식은 int이다.
int main(void)
{
    // 학번/이름을 출력
    printf("202134-363836/위서진\n");
    
    // num이라는 int형 변수를 선언하고 0으로 초기화한다.
   int num = 0;
   // 0부터 특정 수(num) 사이의 홀수의 합을 odd_total_num로 선언하고 0으로 초기화한다.
   int odd_total_num = 0;
   // 0부터 특정 수(num) 사이의 짝수의 합을 even_total_num 선언하고 0으로 초기화한다.
   int even_total_num = 0;
   
    // 사용자로부터 특정 숫자를 입력받기 위해 안내 메시지를 출력한다.
   printf("1 ~ 100사이 숫자를 입력 하세요 : \n");
   // 사용자로부터 특정 숫자(%d)를 입력받아, num이라는 변수에 할당한다.
   scanf("%d", &num);

    //조건1) 입력받은 num이 100보다 작거나 같으면 아래의 구문을 실행한다.
   if(num <= 100) {
        //num이 1 이상일 때 while문을 실행한다.
        while(num>=1){
            /*만약 num을 2로 나눈 나머지가 1이라면, 홀수이므로 아래의 구문을 실행한다.
            해당 조건을 만족하지 않으면 실행하지 않고 다음 라인으로 넘어간다.*/
            if(num % 2 == 1) {
                //홀수의 합인 odd_total_num에 현재의 num을 더해준다.
                odd_total_num = odd_total_num + num;
            }
            //만약 num을 2로 나눈 나머지가 0이라면, 짝수이므로 아래의 구문을 실행한다.
            else if(num % 2 == 0){
                //짝수의 합인 even_total_num에 현재의 num을 더해준다.
                even_total_num = even_total_num + num;
            }

            //현재의 num을 1만큼 감소시킨다.
            num--;            
        }

        /*1만큼 감소시킨 결과가 위의 (num>=1)을 만족하면 while문을 계속 실행하고,
        만족하지 않으면, while문을 끝낸 뒤 아래의 문장을 출력한다.*/

        //홀수 값의 총 합계인 odd_total_num을 출력한다.
        printf("홀수 값의 총 합계 : %d \n",odd_total_num);
        //짝수 값의 총 합계인 even_total_num 출력한다.
        printf("짝수 값의 총 합계 : %d \n",even_total_num);
   }
   //조건2) 입력받은 num이 100보다 크면 아래의 구문을 실행한다.
   else {
        //사용자로부터 입력받은 num이 100을 넘는다는 메시지를 출력한다.
        printf("입력값이 100이 넘습니다\n");
   }

    // 함수 실행을 끝내며 0을 반환한다.
    return 0;
}