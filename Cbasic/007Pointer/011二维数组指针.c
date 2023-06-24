/**
 * @author: Rrow
 * @date: 2023/6/25 6:03
 * Description: 二维数组中的一维数组的首地址其实也是个地址指针
 */
#include <stdio.h>

int main() {
//    定义一个二维数组
    int arr[3][4] = {{11,   22,   33,   44},
                     {111,  222,  333,  444},
                     {1111, 2222, 3333, 4444}};
    printf("arr start address is :%p,move left 1 bit is %p\n", arr, arr + 1);  // 相差4x4bit = 16bit = f
    printf("arr[0] address is :%p,arr[0]+1 address is : %p\n", arr[0], arr[0] + 1);           // 相差1x4bit(int)
    printf("arr[0] start address is :%p,arr[1] is %p\n", arr[0], arr[1]);  // 相差4x4bit = 16bit = f
    printf("arr[0] start address is :%p,arr[1] is %p\n", *(arr), *(arr + 1));  // 相差4x4bit = 16bit = f


}