#include <stdio.h>
int main()
{
    int arr[] = {3, 5, 6, 8, 4, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int j = 0; j < len - 1; j++)
    {
        for (int i = 0; i < len - 1 - j; i++)
        { // len-1防止索引越界
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
}