#include <stdio.h>
int main()
{
    int arr[3][5] = {
        {1, 2, 3, 4, 5},
        {11,22,33,44,55},
        {111,222,333,444,555}
    };
    int (*p)[5] = arr;
    printf("%p\n",arr);
    printf("%p\n",arr + 1);
    printf("================================\n");
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            printf("%d ", *(*p + j));
        }
        printf("\n");
        p++;//移动二维数组的指针
    }
}