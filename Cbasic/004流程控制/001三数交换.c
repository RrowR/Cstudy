#include <stdio.h>

/**
 * ��С�������� data1,data2,data3
 * ð������
 * @return
 */
int main()
{
    int data1;
    int data2;
    int data3;
    printf("������3����,���������,����С��������:\n");
//     ���봫����ǵ�ַҪ�� &
    scanf("%d,%d,%d", &data1, &data2, &data3);
    if(data1 > data2){    // 3 1
        data1 = data1 + data2;   // 4 = 3 + 1
        data2 = data1 - data2;  // data1    3 = 4 - 1
        data1 = data1 - data2;  // 1 = 4 - 3
    }

    if (data1 > data3) {
        data1 = data1 + data3;   // 4 = 3 + 1
        data3 = data1 - data3;  // data1    3 = 4 - 1
        data1 = data1 - data3;  // 1 = 4 - 3
    }

    if (data2 > data3) {
        data2 = data2 + data3;
        data3 = data2 - data3;
        data2 = data2 - data3;
    }

    printf("%d,%d,%d", data1, data2, data3);

}