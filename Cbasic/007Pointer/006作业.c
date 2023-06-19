/**
 * @author: Rrow
 * @date: 2023/6/19 22:43
 * Description: 作业: 输入三个数a,b,c; 要求不管怎么输入，在输出的时候，a,b,c就是由大到小的顺序输出，用函数封装实现
 */
#include <stdio.h>
void sort(int *a,int *b,int *c){
//    printf("%d",*a);            // 再*一次就是取值
    printf("=================\n");
    int arr[3] = {*a,*b,*c};
    int size = sizeof(arr)/sizeof(arr[0]);
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

int main()
{
    int a;
    int b;
    int c;
    puts("input a:");
    scanf("%d",&a);
    puts("input b:");
    scanf("%d",&b);
    puts("input c:");
    scanf("%d",&c);
    sort(&a,&b,&c);
}