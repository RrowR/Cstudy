/**
* @Author   Rrow
* @Date     2023/6/25 09:27
*/
#include <stdio.h>

int main()
{
    int arr[2][3] = {{11, 111, 1111},
                     {22, 222, 2222}};

    int *p;
    p = &arr[0][0];
// 二位int类型的数组的类型是连续的，所以可以直接用 *p++ 来进行循环地址取值
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", *p++);
        }
    }
    printf("\n");

//    数组指针，定义一个指针，指向另一个数组,这里的指针的第一层的数组地址
    int (*p2)[3];
    p2 = arr;
//    printf("=================\n");
    printf("p2=%p\n", p2);
    printf("p2++=%p\n", ++p2);          // 偏移了一个数组
    // 遍历数组指针里的值
//    for (int i = 0; i < 2; ++i) {
//        printf("p2[%d]=%p\n", i, p2[i]);
//    }
    printf("=================\n");
    // 遍历二维数组里的每个子数组里的值
//    for (int i = 0; i < 2; ++i) {
//        for (int j = 0; j < 3 ; ++j) {
//            // 这里的p2其实就是一个数组指针
//            printf("p2[%d][%d]=%d\n", i, j, p2[i][j]);
//        }
//    }

}