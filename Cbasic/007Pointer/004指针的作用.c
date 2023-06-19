/**
 * @author: Rrow
 * @date: 2023/6/19 22:31
 * Description: 指针的作用
 */
#include <stdio.h>

void dataChange(int *data,int *data2){
    int temp;
    temp = *data;           // 这里取的是对应地址的值,不是方法栈里的值
    *data = *data2;
    *data2 = temp;
}

int main()
{
    int data = 10;
    int data2 = 20;


    dataChange(&data, &data2);
    printf("data = %d\n", data);
    printf("dat2 = %d\n", data2);

}