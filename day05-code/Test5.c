#include <stdio.h>
int main()
{
    int money;
    printf("请输入金额：");
    scanf("%d", &money);

    if (money <= 0)
    {
        printf("零氪");
    }
    else if (money >= 1 && money <= 100)
    {
        printf("VIP1");
    }
    else if (money > 100 && money <= 500)
    {
        printf("vip2");
    }
    else if (money > 500 && money <= 1000)
    {
        printf("vip3");
    }
    else
    {
        printf("vip5");
    }
}