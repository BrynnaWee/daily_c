/*����
 * ǥ�� �Է����� ����, ����, ����, ���� ������ �Էµ˴ϴ�. ���⼭ �� ������ ��� ������ 85�� �̻��� �� �հ��̶�� ���߽��ϴ�. ��� ������ ���� "�հ�", "���հ�"�� ����ϴ� ���α׷��� ���弼��(scanf �Լ� ȣ�� ���� ���ڿ��� ����ϸ� �� �˴ϴ�). ��, ������ 0������ 100�������� �Է¹��� �� ������ ������ ����ٸ� "�߸��� ����"�� ����ϰ� �հ�, ���հ� ���δ� ������� �ʾƾ� �մϴ�.
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
        printf("�߸��� ����\n");
    }
    else
    {
        average = (korean+english+math+science)/4;
        if(average>=85)
            printf("�հ�\n");
        else
            printf("���հ�\n");
    }

    return 0;
}
