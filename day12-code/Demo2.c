#include <stdio.h>
int main()
{
    char str[100];
    printf("请输入字符串：\n");
    scanf("%s", str);

    printf("输入的字符串是：%s\n", str);

    char* p = str;

    while(1) {
        char c = *p;
        if(c == '\0') {
            break;
        }
        printf("%c\n", c);
        p++;
    }
}