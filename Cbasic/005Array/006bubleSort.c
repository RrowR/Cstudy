/**
 * @author: Rrow
 * @date: 2023/6/16 0:27
 * Description: 冒泡排序
 */
#include <stdio.h>

int main() {
    int arr[] = {1, 3, 6, 2, 8, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp;

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }


}