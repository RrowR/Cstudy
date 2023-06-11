#include <stdio.h>

/**
 * 连续输入3个数
 * @return
 */
int main()
{

    int data;
    int data2;
    int data3;

    
    printf("请输入3个数:\n");
//    这里还不能输入 \n 因为这里已经开始作为输入了...
    scanf("%d %d %d",&data,&data2,&data3);
//    这里还要将输入的索引位置进行输出
    printf("你输入的数据是: data=%d,data2=%d,data3=%d\n",data,data2,data3);

    return 0;
}