#include <stdio.h>
int main()
{
    int num;
    int rev = 0;
    printf("请输入任意整数：\n");
    scanf("%d",&num);
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    printf("输入的整数的逆序为：%d\n",rev);
    return 0;
}