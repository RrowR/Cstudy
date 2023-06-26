/**
* @Author   Rrow
* @Date     2023/6/26 09:14
*/
#include <stdio.h>

int main()
{
    int arr[3][4] = {{1, 11, 111, 111},
                     {2, 22, 222, 222},
                     {3, 33, 333, 333}};
    int (*p)[4] = arr;
    printf("%p\n", p);
    printf("%p\n", &arr[0][0]);
    printf("%p\n", &arr[0][1]);
    printf("%p\n", &arr[1][0]);
//    父数组+1偏移子数组长度大小，子数组+1偏移子数组元素大小
    printf("%p\n", (*(p+1)+1));


}