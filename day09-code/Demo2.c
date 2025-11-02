#include <stdio.h>
int binarySearch(int arr[], int num, int len);
int main()
{
    //二分查找/折半查找：要求数组中的数据必须是有序的，从小到大或者从大到小
    //每次排除一半的范围
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(arr) / sizeof(arr[0]);
    int num = 4;
    printf("%d\n", binarySearch(arr, num, len));
}
int binarySearch(int arr[],int num,int len)
{
    int min = 0;
    int max = len - 1;
    while (min <= max) {
        int mid = (min + max) / 2;
        if (arr[mid] < num) {
            min = mid + 1;
        } else if (arr[mid] > num) {
            max = mid -1;
        } else {
            return mid;
        }
    }
    return -1;
}