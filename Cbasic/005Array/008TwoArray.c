/**
 * @author: Rrow
 * @date: 2023/6/16 23:46
 * Description: 二维数组的定义
 */
#include <stdio.h>

int main() {
    int arr[2] = {1, 2};
    int arr2[2][3] = {{1, 2,5},
                      {3, 4,7}};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr2[i][j]);
        }
    }

}