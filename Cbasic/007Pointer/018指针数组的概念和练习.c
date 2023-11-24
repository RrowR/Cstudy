#include <stdio.h>

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;

// 指针数组  告诉系统我是一个指针   简单版
    int *p[4] = {&a, &b, &c, &d};

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", *p[i]);
    }
}