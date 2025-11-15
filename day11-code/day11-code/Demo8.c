#include <stdio.h>
int main()
{
    //方法一
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    //方法二
    int brr1[4] = {1,2,3,4};
    int brr2[4] = {5,6,7,8};
    int brr3[4] = {9,10,11,12};
    int* brr[3] = {brr1,brr2,brr3};

    for (int i = 0; i < 3; i++) {
        //i:二维数组的索引
        for (int j = 0; j < 4; j++) {
            //j:一维数组的索引
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("==========================\n");

    for (int i = 0; i < 3; i++) {
        //i:二维数组的索引
        for (int j = 0; j < 4; j++) {
            //j:一维数组的索引
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }




}