#include <stdio.h>
int main()
{
    int num1, num2;
    printf("请输入第一个数：");
    scanf("%d", &num1);
    printf("请输入第二个数：");
    scanf("%d", &num2);

    printf("俩数之和为%d", num1 + num2);

    return 0;
}