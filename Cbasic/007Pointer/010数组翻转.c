/**
 * @author: Rrow
 * @date: 2023/6/24 4:31
 * Description: 数据先进行排序,然后进行翻转
 */
#include <stdio.h>
void toSort(int *arr,int lenth)
{
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
}

// 翻转的本质:首尾交换1/2的偏移量
void toReverse(int *arr,int lenth)
{
    int temp;
//    这里偏移量一定要是一半,不然又会翻转回来
    for (int i = 0; i < lenth/2; ++i) {
        temp = arr[i];
        arr[i] = arr[lenth - i - 1];
        arr[lenth - i - 1] = temp;
    }

}


int main()
{
    int arr[] = {11, 55, 33, 77, 44};
    int size = sizeof(arr) / sizeof(arr[0]);
    toSort(arr, size);
    toReverse(arr, size);
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
}