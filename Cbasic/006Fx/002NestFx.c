/**
 * @author: Rrow
 * @date: 2023/6/18 2:06
 * Description: 
 */
#include <stdio.h>

void method02(){
    printf("method02\n");
}

void method01()
{
    printf("method01\n");
    method02();
}

int main()
{
    method01();
    printf("main method \n");
}
