/*����
ǥ�� �Է����� ���ڰ� �Էµ˴ϴ�. ���� ���Ǵ�� �Էµ� ���ڸ� �˻��Ͽ� ����� ����ϴ� ���α׷��� ���弼��(scanf �Լ� ȣ�� ���� ���ڿ��� ����ϸ� �� �˴ϴ�).

���ڰ� k�� �ٸ��� "��", ������ "����"
���ڰ� h���� ũ�� "��", �۰ų� ������ "����"
���ڰ� o���� �۰ų� ������ "��", ũ�� "����"

*/

#include <stdio.h>

int main()
{
    char str;
    char result;

    scanf("%s",&str);

    printf("%s\n", str != 'k' ? "��" : "����");
    printf("%s\n", str>'h' ? "��" : "����");
    printf("%s\n", str<='o' ? "��" : "����");

    return 0;
}