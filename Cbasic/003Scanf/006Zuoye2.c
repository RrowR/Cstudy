#include <stdio.h>

/**
 * ת���ַ���
 * 6.�����򽫡�China���������,���������:��ԭ������ĸ�����4 ����ĸ����ԭ������ĸ��
 * ���磬��ĸ��A������� 4 ����ĸ�ǡ�E��,�á�E�����桰A������ˣ���China��Ӧ��Ϊ��Glmre����
 * ���һ����,�ø���ֵ�ķ���ʹ cl,c2,c3,c4,c5 ��5��������ֵ�ֱ�Ϊ'C' 'h'��'i��'n','a',
 * ��������,ʹc1,c2,c3,c4,c5�ֱ��ΪGlmre���ֱ��� putchar������ printf ��������� 5 ���ַ�
 * @return
 */
int main()
{
//     �����charֻ���� ������
    char a = 'C';
    char b = 'h';
    char c = 'i';
    char d = 'n';
    char e = 'a';

    printf("%c%c%c%c%c\n",a+4,b+4,c+4,d+4,e+4);

//    putcharֻ����������ַ�
    putchar(a+4);
    putchar(b+4);
    putchar(c+4);
    putchar(d+4);
    putchar(e+4);


}