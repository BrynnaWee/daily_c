#include <stdio.h>

int main()
{
    unsigned char flag = 0;

    flag |= 1; // 0000 0001 ����ũ�� ��Ʈ OR�� 8��° ��Ʈ�� on
    flag |= 2; // 0000 0010 ����ũ�� ��Ʈ OR�� 7��° ��Ʈ�� on
    flag |= 4; // 0000 0100 ����ũ�� ��Ʈ OR�� 6��° ��Ʈ�� on

    printf("%u\n", flag);  /*7�� ����. 
                            ������ 6~8��°�� ��Ʈ�� �ױ� ������ flag�� 0000 0111�� �ǰ�
                            �������� ��ȯ�ϸ� 7�� ��. 
                            */
    
    if(flag & 1) // &������ : �ش� ��Ʈ�� �÷��װ� �����ִ��� Ȯ���ϴ� ������.
        printf("0000 0001 flag ��������\n");
    else
        printf("0000 0001 flag ��������\n");

    
    if(flag & 2)
        printf("0000 0010 flag ��������\n");
    else
        printf("0000 0010 flag ��������\n");
   
    if(flag & 4)
        printf("0000 0100 flag ��������\n");
    else
        printf("0000 0100 flag ��������\n");

    return 0;
}