#include <stdio.h>

int main()
{
    char a = 'a';
    char b = 'b';

    char A = 'A';
    char B = 'B';

    // %c ��ʾһ��char
    printf("%c,%c,%c,%c\n",a,b,A,B);
    printf("a=%d,b=%d,A=%d,B=%d\n",a,b,A,B);

    puts("������һ����д��ĸ\n");
//    & ��ȡ��ַ
    scanf("%c",&a);
    b = a + 32;
    printf("���������ĸ��Ӧ��Сд��ĸ�� %c\n",a+32);
    printf("���������ĸ��Ӧ��Сд��ĸ�� %c\n",b);

    printf("����\n");

    getchar();

    putchar(getchar() + 32);


}