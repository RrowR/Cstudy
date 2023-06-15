/**
 * @author: Rrow
 * @date: 2023/6/16 0:00
 * Description: 
 */
#include <stdio.h>

int main()
{
    int arr[10];
    arr[0] = 100;
    arr[1] = 100;
    arr[2] = 200;
    arr[3] = 300;
    arr[4] = 400;
    arr[5] = 500;
    arr[6] = 600;
    arr[7] = 700;
    arr[8] = 800;
    arr[9] = 900;
    puts("array init finished");
    for (int i = 0; i < 10; ++i) {
        printf("%d -address- %p\n", arr[i],&arr[i]);
    }
    puts("done");
}