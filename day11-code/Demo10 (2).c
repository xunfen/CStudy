#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int len = sizeof(arr) / sizeof(arr[0]);

    int *p1 = arr;//获取首地址
    int *p2 = &arr[0];//依旧是首地址
    printf("%d\n", *p1);
    printf("%d\n", *p2);

    printf("===================\n");

    //获取数组中的元素
    for (int i = 0; i < len; i++) {
        printf("%d\n", *(p1 + i));
    }
}