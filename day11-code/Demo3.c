#include <stdio.h>
int* method();
int main()
{
    //野指针：访问一个不存在的内存地址
    int a = 10;
    int *p = &a;
    printf("%d\n", p);
    printf("%d\n", *p);
    int* p2 = p + 10;
    printf("%d\n", p2);
    printf("%d\n", *p2);

    //悬空指针：指向的空间已分配，但是被释放了
    int *p3 = method();
    printf("===================\n");
    printf("托点时间\n");
    printf("====================\n");
    printf("%d\n", p3);
    printf("%d\n", *p3);
    
}

int* method()
{
    int num = 10;
    int *p = &num;
    return p;
}
