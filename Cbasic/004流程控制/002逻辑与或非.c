#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("请输入2个数:\n");
    scanf("%d,%d",&a,&b);

    if (a == 1 && b == 1) {
        printf("进入了逻辑与\n");
    }

    if (a == 1 || b == 1) {
        printf("进入到了逻辑或\n");
    }

    if(!a){
        printf("进入到了逻辑非\n");
    }

}