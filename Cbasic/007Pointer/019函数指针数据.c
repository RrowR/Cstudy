#include <stdio.h>

// 定义了2个方法
int sum(int a,int b)
{
    return a + b;
}

int plus(int a,int b)
{
    return a * b;
}

// 指针函数,这里的写法暂时还不理解
int datahandler(int data1,int data2,int (*pfunc)(int,int)){
    int ret;
    ret = (*pfunc)(data1,data2);
    return ret;
}

int main()
{
    int a = 20;
    int b = 10;
    int ret;

    // 初始化函数指针
    int (*pfunc[2])(int,int) = {sum,plus};

    for (size_t i = 0; i < 2; i++)
    {
        ret = (*pfunc[i])(a,b);
        printf("ret = %d\n",ret);
    }
    
    return 0;
}