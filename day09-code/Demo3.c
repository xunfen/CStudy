#include <stdio.h>
int interpolationSearch(int arr[], int num, int len);
int main()
{
    //插值查找：数组中的数据分布要均匀
    //满足要求效率比二分查找快，反之会慢
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(arr) / sizeof(arr[0]);
    int num = 4;
    printf("%d\n", interpolationSearch(arr, num, len));
    
}
int interpolationSearch(int arr[] ,int num,int len)
{
    int min = 0;
    int max = len - 1;
    while (min <= max) {
        int mid = min + (num - arr[min]) * (max - min) / (arr[max] - arr[min]);
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