#include <stdio.h>

int main()
{
    int data;
    printf("请输入一个整数: \n");
    scanf("%d", &data);  // 这里一定要用&符号,里面要传入指针,否则输入指令传不进去值
    printf("输入完毕\n");
    printf("你输入的数据是: %d\n",data);
    return 0;
}
