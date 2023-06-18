/**
 * @author: Rrow
 * @date: 2023/6/18 19:45
 * Description: 求阶乘
 */
#include <stdio.h>

long int Z(int num) {

//
    long int res;

    if (num == 1) {
        res = 1;
    } else {
        res = Z(num - 1) * num;
    }
    return res;
}

int main() {
    int num;
    long int res;

    puts("pls input number in 5 to cul jiecheng , num is : ");
    scanf("%d", &num);

    res = Z(num);

    printf("result is %d", res);
}