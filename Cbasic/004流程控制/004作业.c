#include <stdio.h>

/**
 * ���������ĸת����Сд��ĸ,�����
 * @return
 */
int main() {

    char cdata;

//    printf("������һ���ַ�\n");
    puts("������һ���ַ�");        // ��printfһ��,�Դ�һ���س�
    scanf("%c", &cdata);

//    �ж��Ƿ��Ǵ�д��ĸ
    if (cdata >= 97 && cdata <= 122) {
        printf("%c\n", cdata);
    } else {
        printf("%c", cdata + 32);
    }

    printf("\ndone! \n");
    return 0;

}