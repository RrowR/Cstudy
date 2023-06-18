/**
 * @author: Rrow
 * @date: 2023/6/18 23:15
 * Description: 编程案例: 有两个班的同学，分别是10个人和5个人，分别求这两个班的平均分
 */
#include <stdio.h>

double calculateAvg(double array[],int lenth)
{
    double sum = 0;         // 这里必须要先赋一个初值,否则第二次循环会被累加上去
    for (int i = 0; i < lenth; i++) {
        sum += array[i];
    }

    return sum/lenth;
}

int main()
{
    double avg10;
    double avg5;
    double class10[10] = {11.1, 22.2, 33.3, 44.4, 55.5, 66.6, 77.7, 88.8, 99.9, 100.0};
    double class5[5] = {22.2, 22.2, 22.2, 22.2, 22.2};
    avg10 = calculateAvg(class10, sizeof(class10)/sizeof(class10[0]));
    avg5 = calculateAvg(class5,sizeof(class5)/sizeof(class5[0]));
//    这里要用浮点数
    printf("avg10:%f\n", avg10);
    printf("avg5:%f\n", avg5);
}