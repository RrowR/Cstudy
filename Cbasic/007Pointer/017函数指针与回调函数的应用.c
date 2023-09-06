/**
* @Author   Rrow
* @Date     2023/6/29 15:11
* Description: 函数指针与回调函数的应用
*/
#include <stdio.h>
#include <stdlib.h>
int doPlus(int data1, int data2) {
    return data1 + data2;
}

int doSub(int data1, int data2) {
    return data1 - data2;
}

int doMul(int data1, int data2) {
    return data1 * data2;
}

int doMethod(int (*pfunc)(int,int),int data1,int data2)
{
    int ret;
    ret = (*pfunc)(data1,data2);
    return ret;
}

int main() {
    int input;
    int data1;
    int data2;
    int res;
//    定义一个函数指针,函数指针的参数名可以不写
    int (*pfunc)(int , int );
    puts("pls input a number(plus)2(sub)3(mul),and result of 2 num is : data1,data2");
    scanf("%d", &input);
    scanf("%d", &data1);
    scanf("%d", &data2);
    switch (input) {
        case 1:
//            函数指针指向doPlus函数
            pfunc = doPlus;
            break;
        case 2:
            pfunc = doSub;
            break;
        case 3:
            pfunc = doMul;
            break;
        default:
            printf("你输入的信息错误，已推出");
            exit(-1);
    }
    res = doMethod(pfunc,data1,data2);
    printf("res data = %d",res);
}
