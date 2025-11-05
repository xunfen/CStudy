#include <stdio.h>
int main()
{
    int a = 10;
    int* p = &a;//此处的*代表标记
    int b = 20;
    int* q;
    *q = b;
    printf("%d\n", *p);//此处的*代表解引用运算符
    printf("%d\n", *q);

    //int *d = 100;不能直接把数据值附给指针变量,他会当作内存地址用
    //printf("%d\n", *d);

    printf("%d\n", sizeof(*p));
    return 0;
}