#include <stdio.h>

/**
 * 将输入的字母转换成小写字母,并输出
 * @return
 */
int main() {

    char cdata;

//    printf("请输入一个字符\n");
    puts("请输入一个字符");        // 和printf一样,自带一个回车
    scanf("%c", &cdata);

//    判断是否是大写字母
    if (cdata >= 97 && cdata <= 122) {
        printf("%c\n", cdata);
    } else {
        printf("%c", cdata + 32);
    }

    printf("\ndone! \n");
    return 0;

}