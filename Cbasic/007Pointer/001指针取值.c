/**
 * @author: Rrow
 * @date: 2023/6/19 18:27
 * Description: * 获取对应变量地址的值
 */
#include <stdio.h>

int main()
{
    int a = 5;

    printf("%d",*(&a));
}