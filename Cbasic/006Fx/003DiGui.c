/**
 * @author: Rrow
 * @date: 2023/6/18 2:11
 * Description: 递归
 */
#include <stdio.h>


int getFirstYears(int times) {

    int age;

    if (times == 1) {
        age = 10;
    } else {
//        这里回进行递归,最后是 10 + 2 + 2 + 2 + ...
        age = getFirstYears(times - 1) + 2;
    }

    return age;
}

int main() {
    int age;
    int times;
    puts("pls input students age: ");
    scanf("%d", &times);
    age = getFirstYears(times);
    printf("res user age = %d", age);

}