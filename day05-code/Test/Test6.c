#include <stdio.h>
int main()
{
    int num,temp;
    int rev = 0;
    printf("请输入任意整数：\n");
    scanf("%d",&num);
    temp = num;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    if (rev == temp) {
        printf("输入的整数是回文数\n");
    } else {
        printf("输入的整数不是回文数\n");
    }
    return 0;
}