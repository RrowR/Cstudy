/**
 * @author: Rrow
 * @date: 2023/6/19 22:37
 * Description: 
 */
#include <stdio.h>
int main()
{
    int a = 10;
    printf("address of a is 0x%p\n",&a);

    int *p = (int *)0x000000cab97ffbec;  // 指针指向内存地址
    printf("p = 0x%p\n",p);
}