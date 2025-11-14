#include <stdio.h>
int main()
{
    int a = 10;
    int *p1 = &a;
    int **p2 = &p1;
    printf("%d\n", **p2);
    printf("%d\n", *p1);
    printf("=================\n");

    int b = 20;
    int *p3 = &b;
    int **p4 = &p3;
    //二级指针修改一级指针联盟记录的内存地址
    *p4 = &a;
    printf("%d\n", *p3);
    printf("%d\n", **p4);
}
