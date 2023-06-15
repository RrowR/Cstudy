/**
 * @author: Rrow
 * @date: 2023/6/15 23:06
 * Description: 
 */
#include <stdio.h>

int main()
{
    int sum = 0;
    int flag = 1;
    while (1) {
        if (flag > 100) {
            break;
        }
        flag++;
        sum += flag;
    }
    printf("sum final numbers is %d",sum);
}