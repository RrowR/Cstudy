#include <stdio.h>

/**
 * 转换字符串
 * 6.请编程序将“China”译成密码,密码规律是:用原来的字母后面第4 个字母代替原来的字母。
 * 例如，字母“A”后面第 4 个字母是“E”,用“E”代替“A”。因此，“China”应译为“Glmre”。
 * 请编一程序,用赋初值的方法使 cl,c2,c3,c4,c5 这5个变量的值分别为'C' 'h'，'i，'n','a',
 * 经过运算,使c1,c2,c3,c4,c5分别变为Glmre。分别用 putchar函数和 printf 函数输出这 5 个字符
 * @return
 */
int main()
{
//     这里的char只能用 单引号
    char a = 'C';
    char b = 'h';
    char c = 'i';
    char d = 'n';
    char e = 'a';

    printf("%c%c%c%c%c\n",a+4,b+4,c+4,d+4,e+4);

//    putchar只能输出单个字符
    putchar(a+4);
    putchar(b+4);
    putchar(c+4);
    putchar(d+4);
    putchar(e+4);


}