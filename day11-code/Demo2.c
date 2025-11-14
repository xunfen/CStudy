#include <stdio.h>
int main()
{
    //指针相加前提：内存空间是连续的（比如数组）
    int arr[5] = {10, 20, 30, 40, 50};
    int* p1 = &arr[0];
    int* p2 = &arr[5];
    printf("%d\n", p1);
    printf("%d\n", p2);
    printf("%d\n", p1 + 1);
    printf("%d\n", p2 + 1);
    printf("=====================\n");
    printf("%d\n", p2 - p1);

}
