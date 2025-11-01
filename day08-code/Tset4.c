#include <stdio.h>

int main()
{
    int arr[5];
    int temp;
    int len = sizeof(arr) / sizeof(arr[0]);

    // 录入数组
    for (int i = 0; i < len; i++)
    {
        printf("请输入第%d个数：", i + 1);
        scanf("%d", &arr[i]);
    }

    // 遍历数组
    for (int i = 0; i < len; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("==============================\n");

    // 反转数组
    int i = 0;
    int j = len - 1;
    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d\n", arr[i]);
    }
}