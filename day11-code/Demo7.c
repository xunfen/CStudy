#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    // sizeof运算时，arr不会退化成首地址
    printf("%zu\n", arr);
    //&arr参与计算时会退化为第一个首地址
    printf("%p\n", &arr);

    printf("%p\n", arr + 1);
    printf("%p\n", &arr + 1);
}