/**
 * @author: Rrow
 * @date: 2023/6/28 12:37
 * Description: 函数指针
 */
#include <stdio.h>

void toPrintHelloWorld(){
    printf("Hello world \n");
}

void toPrintInput(int data){
    printf("data = %d\n",data);
}

int main()
{
//    定义一个函数指针
    void (*p)();
    void (*p2)();
//    指针指向方法
    p = toPrintHelloWorld;
    (*p)();
    p2 = toPrintInput;
    p2(2);
}