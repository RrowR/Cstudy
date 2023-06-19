/**
 * @author: Rrow
 * @date: 2023/6/19 19:05
 * Description: 不同类型的指针在转称成16进制的时候会不一样,不同类型的时候在进行增加时,增加量为类型的字节数
 */
#include <stdio.h>

int main()
{
    int a = 0x1234;
    int *p = &a;
    char *c = &a;

//    这2个是没有问题的
    printf("p = %p\n", p);
    printf("c = %p\n", c);


//    取值会有问题,转换成Hex进制
    printf("p = %x\n", *p);
    printf("c = %x\n", *c);

    //    取值会有问题,转换成Hex进制
    printf("++p = %p\n", ++p);          // 4个增量  4bit
    printf("++c = %p\n", ++c);          // 1个增量  1bit



    return 0;

}