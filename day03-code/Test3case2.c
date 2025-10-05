#include <stdio.h>
int main()
{
    int num1, num2;
    printf("请输入俩个数：");
    scanf("%d %d", &num1, &num2);//占位符要与后面变量一一对应

    printf("俩数之和为%d", num1 + num2);

    return 0;
}