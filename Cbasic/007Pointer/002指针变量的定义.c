/**
 * @author: Rrow
 * @date: 2023/6/19 18:37
 * Description: 定义指针变量
 */
#include <stdio.h>

int main()
{
    int a = 5;
    int *p;
    p = &a;

    printf("%d",*p);
}