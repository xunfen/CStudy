#include <stdio.h>

void sum(int num1, int num2)
{
    int sum = num1 + num2;
    printf("Sum = %d", sum);
}

int main()
{
    int num1, num2;
    printf("请输入第一个整数：");
    scanf("%d", &num1);
    printf("请输入第二个整数：");
    scanf("%d", &num2);
    sum(num1, num2);
    return 0;
}
