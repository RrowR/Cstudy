#include <stdio.h>

int main()
{
    int a;
    puts("������һ��5���ڵ�����");
    scanf("%d",&a);
    switch (a) {
        case 1:
            printf("���������1\n");
            break;
        case 2:
            printf("���������2\n");
            break;
        case 3:
            printf("���������3\n");
            break;
        case 4:
            printf("���������4\n");
            break;
        case 5:
            printf("���������5\n");
            break;
        default:
            puts("���������������,ɵ��");
    }

}