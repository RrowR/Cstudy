#include <stdio.h>

int main()
{
    int a = 3;
    float  f = 2.33;
    printf("�Ҵ�ӡ���˶�����");
    printf("����ǻ���\n");

    /*
     * %d ռλ��,��ʾʮ������ decimal
     * %f ռλ��,��ʾС�� float
     * %s ����ַ�
     * %c �����ַ�
     * %x ��16�������
     * %p ��ӡ�ڴ��ַ
     *
     * */

    printf("a=%d\n",a);
    printf("f=%f\n",f);
    a = 100;
    printf("�޸ĺ��a��ֵ: a=%d\n",a);

//    %x ��16�������x
    printf("ʹ��16�������a,a=%x\n",a);
    printf("a�ĵ�ַΪ:a=%p\n",a);

    char c_data = '2';
    printf("��ʾ1���ַ�%c\n", c_data);

    printf("%s\n","love nachoco  sss");

//
    printf("result = %f\n",(float)4/3);





}