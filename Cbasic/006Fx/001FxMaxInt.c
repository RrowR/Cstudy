/**
 * @author: Rrow
 * @date: 2023/6/17 15:44
 * Description: 函数定义
 */
#include <stdio.h>

// 方法函数不能写在主函数后,否则主函数调不到
int getMax(int a,int b){
    return a > b ? a : b;
}

int main()
{
    int a = 5;
    int b = 7;
    printf("the max is %d", getMax(a, b));
}

