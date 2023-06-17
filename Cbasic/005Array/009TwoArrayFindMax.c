/**
 * @author: Rrow
 * @date: 2023/6/17 14:29
 * Description: 二维数组里找最大值
 */
#include <stdio.h>

int main() {
    int arr[3][4] = {1, 3, 4, 5, 6, 7, 8, 22, 7, 2, 1, 3};

    int max = arr[0][0];    // 从第一个位置附初始值
    int xLine;
    int yLine;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
                xLine = i;
                yLine = j;
            }
        }
    }

    printf("max is %d, on %d lion, on %d lie", max, xLine, yLine);


}
