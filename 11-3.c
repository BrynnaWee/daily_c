#define _CRT_SECURE_NO_WARNINGS    // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>

int main()
{
    float num1;

    printf("�Ǽ��� �Է��ϼ��� : ");
    scanf("%f", &num1);

    printf("%f", num1);

    return 0;
}

/*����
    ���⼭ ������ double�� �����ߴٸ� scanf���� ���� �����ڷ� %lf�� �ְ�, 
    long double�� �����ߴٸ� %Lf�� �ֽ��ϴ�.
    (double�� printf�� ����� �� %f�� �ᵵ ������ scanf�� %lf�� ��� �մϴ�).


    double num1;
    scanf("%lf", &num1);    // �ڷ����� double�� ���� %lf

    long double num2;
    scanf("%Lf", &num2);    // �ڷ����� long double�� ���� %Lf
*/