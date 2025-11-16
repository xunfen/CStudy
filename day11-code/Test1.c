#include <stdio.h>

int add(int num1, int num2);       // 加
int substract(int num1, int num2); // 减
int mutiply(int num1, int num2);   // 乘
int divide(int num1, int num2);    // 除

int main()
{
    int (*p[4])(int, int) = {add, substract, mutiply, divide};//定义一个数组去装函数指针(函数指针数组)
    //只有形参完全相同，而且返回值也要一样的函数才能放到同一个数组

    int num1, num2, choose;
    printf("请输入第一个数: ");
    scanf("%d", &num1);
    printf("请输入第二个数: ");
    scanf("%d", &num2);
    printf("请输入执行操作: ");
    scanf("%d", &choose);
    printf("结果为: %d\n", p[choose - 1](num1, num2));
}

int add(int num1, int num2)
{
    return num1 + num2;
}

int substract(int num1, int num2)
{
    return num1 - num2;
}

int mutiply(int num1, int num2)
{
    return num1 * num2;
}

int divide(int num1, int num2)
{
    return num1 / num2;
}