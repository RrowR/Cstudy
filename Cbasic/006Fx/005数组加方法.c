/**
 * @author: Rrow
 * @date: 2023/6/18 22:54
 * Description: 将数组传到方法里时,要注意传入的数组是一个地址值,方法里无法获取数组长度,需要将数据长度也传过来
 *              这里设计到值传递和地址传递的问题(这里很像java的基本数据类型和引用数据类型)
 */
#include <stdio.h>

void printArr(int arry[3],int lenth)
{
    printf("printArr size is %d\n", sizeof(arry));        // 这里形参不管填写多少,都是8个bit,因为地址是由8bit位来表示
    for (int i = 0; i < lenth; i++) {
        printf("arr[%d]=%d\n",i,arry[i]);
    }
}

int main()
{
//    int = 4bit 3个数组值就是 3*4bit=12bit
    int arr[3] = {9, 11, 3};

    int lengh = sizeof(arr)/sizeof(arr[0]);

    printf("%d\n", sizeof(arr));

    printArr(arr,lengh);
//    数组在方法里只有地址的概念,所以我这里从首地址开始传也可以
    printArr(&arr[0],lengh);
}