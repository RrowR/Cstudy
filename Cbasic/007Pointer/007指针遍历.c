/**
 * @author: Rrow
 * @date: 2023/6/19 23:33
 * Description: 指针遍历
 */
#include <stdio.h>
int main()
{
    int arr[3] = {1,2,3};
    int *p = &arr[0];
    for (int i = 0; i < 3; ++i) {
//
        printf("%p,%d\n",p,*p++);
    }
}