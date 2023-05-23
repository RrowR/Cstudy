#include <stdio.h>

int main()
{
    int a = 3;
    float  f = 2.33;
    printf("我打印出了东西了");
    printf("这个是换行\n");

    /*
     * %d 占位符,表示十进制数 decimal
     * %f 占位符,表示小数 float
     * %s 多个字符
     * %c 单个字符
     * %x 以16进制输出
     * %p 打印内存地址
     *
     * */

    printf("a=%d\n",a);
    printf("f=%f\n",f);
    a = 100;
    printf("修改后的a的值: a=%d\n",a);

//    %x 以16进制输出x
    printf("使用16进制输出a,a=%x\n",a);
    printf("a的地址为:a=%p\n",a);

    char c_data = '2';
    printf("显示1个字符%c\n", c_data);

    printf("%s\n","love nachoco  sss");

//
    printf("result = %f\n",(float)4/3);





}