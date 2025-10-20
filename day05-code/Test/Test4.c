#include <stdio.h>
int main()
{
    int num;
    printf("请输入一个数字：");
    scanf("%d", &num);
    int i = 1;
    while (i * i <= num) {
        i++;
    }
    printf("num的算数平方根为：%d\n", i - 1);
}