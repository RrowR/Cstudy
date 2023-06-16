/**
 * @author: Rrow
 * @date: 2023/6/16 1:03
 * Description: 选择排序,就是每次进行比较,大于的就交换
 */
#include <stdio.h>

int main() {
    int arr[] = {3, 5, 2, 4, 7, 11, 23, 6};

    int size = sizeof(arr) / sizeof(arr[0]);

    int temp;

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int k = 0; k < size; ++k) {
        printf("%d ", arr[k]);
    }


}