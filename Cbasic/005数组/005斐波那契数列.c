/**
 * @author: Rrow
 * @date: 2023/6/16 0:20
 * Description: 斐波那契数列
 */
#include <stdio.h>
int main()
{
    int feibo[30];

    feibo[0] = 0;
    feibo[1] = 1;

    int size = sizeof(feibo)/sizeof(feibo[0]);

    for (int i = 2; i < 30; ++i) {
        feibo[i] = feibo[i - 1] + feibo[i - 2];
    }

    for (int i = 0; i < size; ++i) {
        printf("%d ", feibo[i]);
    }


}