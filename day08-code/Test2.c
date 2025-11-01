#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int arr[10] = {0};
    int len = sizeof(arr) / sizeof(arr[0]);
    /*  for (int i = 0; i < len; i++) {
         printf("%d\n",arr[i]);
     } */
    srand(time(NULL));
    for (int i = 0; i < len; i++)
    {
        int num = rand() % 100 + 1;
        arr[i] = num;
        printf("%d\n", arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }

    printf("%d\n", sum);

    return 0;
}