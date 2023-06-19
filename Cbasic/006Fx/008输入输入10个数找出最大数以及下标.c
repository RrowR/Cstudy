/**
 * @author: Rrow
 * @date: 2023/6/19 12:22
 * Description: 冒泡排序,然后找出最大值
 */
#include <stdio.h>

void bubleSortPrint(int arr[], int lenth) {
    int temp;

    for (int i = 0; i < lenth; ++i) {
        for (int j = 0; j < lenth - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < lenth; ++i) {
        printf("%d ", arr[i]);
    }
}

void findMax(int arr[], int lenth) {
    printf("Max is %d", arr[lenth - 1]);
}

int main() {
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int num6;
    int num7;
    int num8;
    int num9;
    int num10;
    puts("pls input num 1");
    scanf("%d", &num1);
    puts("pls input num 2");
    scanf("%d", &num2);
    puts("pls input num 2");
    scanf("%d", &num3);
    puts("pls input num 3");
    scanf("%d", &num4);
    puts("pls input num 4");
    scanf("%d", &num5);
    puts("pls input num 5");
    scanf("%d", &num6);
    puts("pls input num 6");
    scanf("%d", &num7);
    puts("pls input num 7");
    scanf("%d", &num8);
    puts("pls input num 8");
    scanf("%d", &num9);
    puts("pls input num 9");
    scanf("%d", &num10);
    puts("pls input num 10");

    int arr[10] = {num1, num2, num3, num4, num5, num6, num7, num8, num9, num10};

    bubleSortPrint(arr, sizeof(arr) / sizeof(arr[0]));

    findMax(arr, sizeof(arr) / sizeof(arr[0]));

}