#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int num = arr[0];
    int num2 = arr[2];
    int num3 = arr[4];
    int sum = num + num2 + num3;
    printf("%d\n", sum);
    printf("==================\n");
    printf("%d\n",arr[4]);
    arr[4] = 100;
    printf("%d\n",arr[4]);

}