#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr) / sizeof(arr[0]);
    srand(time(NULL));
    int index,temp;
    for (int i = 0; i < len; i++) {
        index = rand() % len;
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }

    for (int i = 0; i < len; i++) {
        printf("%d\n", arr[i]);
    }
}