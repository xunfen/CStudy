#include <stdio.h>
int main()
{
    int arr[] = {6, 5, 8, 2, 4, 6, 5, 4, 3, 8, 2, 11};
    int max = arr[0];
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d\n", max);
}
