#include <stdio.h>

/**
 * 从小到大排列 data1,data2,data3
 * 冒泡排序
 * @return
 */
int main()
{
    int data1;
    int data2;
    int data3;
    printf("请输入3个数,随机三个数,将从小到达排列:\n");
//     输入传入的是地址要带 &
    scanf("%d,%d,%d", &data1, &data2, &data3);
    if(data1 > data2){    // 3 1
        data1 = data1 + data2;   // 4 = 3 + 1
        data2 = data1 - data2;  // data1    3 = 4 - 1
        data1 = data1 - data2;  // 1 = 4 - 3
    }

    if (data1 > data3) {
        data1 = data1 + data3;   // 4 = 3 + 1
        data3 = data1 - data3;  // data1    3 = 4 - 1
        data1 = data1 - data3;  // 1 = 4 - 3
    }

    if (data2 > data3) {
        data2 = data2 + data3;
        data3 = data2 - data3;
        data2 = data2 - data3;
    }

    printf("%d,%d,%d", data1, data2, data3);

}