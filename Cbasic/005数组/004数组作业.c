/**
 * @author: Rrow
 * @date: 2023/6/16 0:11
 * Description: 
 */
#include <stdio.h>

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6};
    for (int i = sizeof(arr) / sizeof(arr[1]); i >= 0; i--) {
        printf("%d\n", arr[i]);
    }


}