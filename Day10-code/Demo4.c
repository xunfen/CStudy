#include <stdio.h>

void getMaxAndMin(int arr[], int len, int* max, int* min);
int main()
{
    int arr[] = {5, 6, 8, 6, 2, 4, 5, 7};
    int len = sizeof(arr) / sizeof(arr[0]);
    int max , min;
    getMaxAndMin(arr, len, &max, &min);
    printf("max = %d, min = %d\n", max, min);

}

void getMaxAndMin(int arr[], int len, int* max, int* min)
{
    *max = arr[0];
    *min = arr[0];
    for (int i = 0; i < len; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
    for (int i = 0; i < len; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }

}
