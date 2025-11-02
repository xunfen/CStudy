#include <stdio.h>
int order(int arr[], int num, int len);
int main()
{
    //基本查找
    int arr[] = {47, 45, 89, 12, 65};
    int len = sizeof(arr) / sizeof(arr[0]);
    int num = 12;
    printf("%d\n", order(arr, num, len));
}
int order(int arr[], int num, int len)
{
    for (int i = 0; i < len; i++) {
        if (num == arr[i]) {
            return i;
        }
    }
    return -1;
}