#include <stdio.H>
int main()
{
    int num;
    printf("请输入一个三位数：");
    scanf("%d", &num);
    printf("个位数字为：%d\n", num % 10);
    printf("十位数字为：%d\n", num / 10 % 10);
    printf("百位数字为：%d\n", num / 100 % 10);
}
