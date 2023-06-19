/**
 * @author: Rrow
 * @date: 2023/6/19 12:04
 * Description: 
 */
#include <stdio.h>

// 这里传入的数组类型为为数组实际值的类型     二维数组的y值一定要传大小
void printArr(int arr[][3],int lenth,int height)
{
    for (int i = 0; i < lenth; ++i) {
        for (int j = 0; j < height; ++j) {
            printf("array value is %d \t", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[2][3] = {1, 2, 3, 4, 5, 6};

//    printArr(arr, 2, 3);
    printArr(&arr[0][0], 2, 3);         // 这里传起始位置的地址也是可以的
}