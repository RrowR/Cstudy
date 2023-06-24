/**
 * @author: Rrow
 * @date: 2023/6/25 6:28
 * Description: 二维数组指针地址
 */
#include <stdio.h>

int main() {
    int arr[3][4] = {{11,   22,   33,   44},
                     {111,  222,  333,  444},
                     {1111, 2222, 3333, 4444}};
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("arr[i] + j is %p,int value is %d\n", arr[i] + j, arr[i][j]);        // 根据int位置累加地址
            printf("&arr[i][j] is %p,int value is %d\n", &arr[i][j], arr[i][j]);        // 拿&arr[i][j]值的地址
            printf("*(arr + i) + j is %p,int value is %d\n", *(arr + i) + j, *(*(arr + i) + j));
            printf("==================\n");
        }
    }
}