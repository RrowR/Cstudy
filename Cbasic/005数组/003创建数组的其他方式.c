/**
 * @author: Rrow
 * @date: 2023/6/16 0:06
 * Description: 
 */
#include <stdio.h>

int main()
{
    int arr1[10] = {1, 2, 3};
    int arr2[] = {1, 2, 3, 44, 5};
    int arr3[10] = {0};   // 给这个数组的所有位置都置为0

//    计算数组元素的大小
    int size;
    size = sizeof(arr3) / sizeof(arr3[0]);
    printf("%d\n", size);


    for (int i = 0; i < 10; ++i) {
        printf("%d\n", arr3[i]);
    }

}