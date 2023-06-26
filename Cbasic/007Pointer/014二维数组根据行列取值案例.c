/**
* @Author   Rrow
* @Date     2023/6/26 08:36
*/
#include <stdio.h>
void toInputScan(int *px,int *py){
    puts("please input two number , range of [3][4]");
//    因为这里传的就是地址，所以直接使用 px py 地址值就好
    scanf("%d",px);
    scanf("%d",py);
}

/* int (*arr)[4] 这个才是二维数组指针，而不是 int *arr[4]
 *
 * 二维数组指针 方法上面 的写法 要值得注意
 * */
int printArrNum(int (*arr)[4],int x,int y)
{
    int data;
    /*
     * 理解下面写法要理解二维数组结构
     *
     * 二维数组的第一层数组也是连续的， arr+x 由于是int类型，二维数组的第一层数组之间也是连续的，相差第二层子数组的长度大小
     *
     * */
    data = *(*(arr+x)+y);
    return data;
}


int main() {
//    定义了一个3行4列的二维数组
    int arr[3][4] = {{1, 11, 111, 111},
                     {2, 22, 222, 222},
                     {3, 33, 333, 333}};
    int data;
//    定义输入的2个数，里面代表二维数组的第几行，第几列
    int x,y;
//    体现封装的思想，将行列参数通过指针传入到方法里赋值
    toInputScan(&x,&y);
/**    也是体现方法封装，目的是为了使用指针
 *
*/
    data = printArrNum(arr,x,y);

    printf("data = %d",data);



}