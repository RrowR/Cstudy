#include <stdio.h>

int main()
{
    int a;
    puts("请输入一个5以内的数字");
    scanf("%d",&a);
    switch (a) {
        case 1:
            printf("您输入的是1\n");
            break;
        case 2:
            printf("您输入的是2\n");
            break;
        case 3:
            printf("您输入的是3\n");
            break;
        case 4:
            printf("您输入的是4\n");
            break;
        case 5:
            printf("您输入的是5\n");
            break;
        default:
            puts("你输入了其他情况,傻逼");
    }

}