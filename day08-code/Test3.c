#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define true 1
#define false 0

int contains(int arr[], int len, int num);
int main()
{
    int arr[10] = {0};
    int len = sizeof(arr) / sizeof(arr[0]);
    srand(time(NULL));
    for (int i = 0; i < len; i++)
    {
        int num = rand() % 100 + 1;
        int flag = contains(arr, len, num);
        if (!flag) {
            arr[i] = num;
            printf("%d\n", arr[i]);
        } else {
            i--;
        }
    }

    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    int avg = sum / len;

    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] < avg)
        {
            count++;
        }
    }

    printf("共有%d个数小于平均数%d\n", count, avg);

    return 0;
}

//判断num是否在数组中存在
int contains(int arr[], int len, int num)
{
    for (int i = 0; i < len; i++) {
        if (arr[i] == num) {
            return true;
        }
    }
    return false;
}

