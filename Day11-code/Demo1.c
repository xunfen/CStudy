#include <stdio.h>
int main()
{
    // 指针的运算
    /*
    步长：指针移动一次，走了多少个字节
    char:1
    short:2
    int:4
    long:4
    long long:8
    加法：指针往后走了N步
    减法：指针往前走了N步
    其他操作系统可能不一样
    */

    int a = 10;
    int *p = &a;
    printf("%d\n", p);//这里直接打印p的地址，所以不用*p//6291060
    printf("%d\n", p + 1);//6291064
    printf("%d\n", p - 1);//6291056
}