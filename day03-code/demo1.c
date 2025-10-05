#include <stdio.h>
int main()
{
    //定义变量接收数据
    int a;
    printf("请输入一个整数：");
    scanf("%d", &a);//&不能省略
    //部分编译器可能会因为scanf安全问题无法使用，查百度就好了

    printf("变量a中的值为：%d",a);

    return 0;
}