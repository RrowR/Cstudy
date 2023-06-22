/**
 * @author: Rrow
 * @date: 2023/6/20 6:43
 * Description: 指针特性
 */
#include <stdio.h>
int main()
{
    int arr[3] = {1, 2, 3};

//    获取元素值,p代表地址,*p代表值
    int *p = arr;

    printf("size of %d\n", sizeof(arr));        // 12 bit  3个int
    printf("size of %d\n", sizeof(p));          // 指针   2个 int


//    也可以通过指针来直接获取值 *arr
    printf("array[0] = %d \n",*arr);

    for (int i = 0; i < 3; i++) {
//        可以把指针当作数组用
        printf("%d ", p[i]);
    }





}