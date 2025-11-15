#include <stdio.h>

int *method1(); // 正确的函数声明

int main()
{
    int *p = method1();
    printf("%d\n", *p);
    return 0;
}

int *method1()
{
    static int a = 10;//变量有生命周期，如果没有static，变量会随方法释放，到时候会空指针报错
    return &a; // 注意：返回局部变量地址存在风险
}