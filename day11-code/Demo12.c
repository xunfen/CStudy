#include <stdio.h>
int main()
{
    int arr1[3] = {1,2,3};
    int arr2[5] = {4,5,6,7,8};
    int arr3[9] = {9,10,11,12,13,14,15,16,17};
    int* arr[3] = {arr1,arr2,arr3};

    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);
    int len3 = sizeof(arr3) / sizeof(arr3[0]);

    int lenArr[3] = {len1,len2,len3};

    
    int** p = arr;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < lenArr[i]; j++) {
            printf("%d ", *(*(p + i) + j));
        }
        printf("\n");
    }
}