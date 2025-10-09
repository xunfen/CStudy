#include <stdio.H>
int main()
{
    int num = 765;
    printf("个位数字为：%d\n", num % 10);
    printf("十位数字为：%d\n", num / 10 % 10);
    printf("百位数字为：%d\n", num / 100 % 10);
}
