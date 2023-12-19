#include <stdio.h>

/**
 * 位移          数组指针
 * int pos,int (*pstu)[4]
*/
int* getPosPerson(int pos,int (*pstu)[4])
{
    int *p;
    p = (int *)(pstu + pos);    // 偏移之后记得取地址,因为返回的是一个 int*
    return p;
}


int main()
{
    int studentScores[3][4] = {
        {11, 22, 33, 44},
        {22, 33, 44, 55},
        {33, 44, 55, 66},
    };


    int *ppos;
    int pos;
    printf("请输入你要输入的学生号数:0,1,2\n");
    scanf("%d",&pos);

    ppos = getPosPerson(pos,studentScores);
    for(int i = 0; i < 4 ; i++){
        printf("%d ",*ppos++);
    }


}