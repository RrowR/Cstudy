#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("������2����:\n");
    scanf("%d,%d",&a,&b);

    if (a == 1 && b == 1) {
        printf("�������߼���\n");
    }

    if (a == 1 || b == 1) {
        printf("���뵽���߼���\n");
    }

    if(!a){
        printf("���뵽���߼���\n");
    }

}