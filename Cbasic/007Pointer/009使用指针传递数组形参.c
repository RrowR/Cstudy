/**
 * @author: Rrow
 * @date: 2023/6/23 23:03
 * Description: 使用指针传递数组形参
 */
#include <stdio.h>

void toPrint(int *pArr,int size){
    for (int i = 0; i < size; ++i) {
        printf("%d\n",pArr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    int *pArr = arr;

    int size = sizeof(arr) / sizeof(arr[0]);

    toPrint(arr,size);


}