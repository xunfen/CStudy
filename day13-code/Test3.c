#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct spot
{
    char name[20];
    int count;
};
int main()
{
    struct spot arr[4] = {{"A", 0}, {"B", 0}, {"C", 0}, {"D", 0}};

    /* for (int i = 0; i < 4; i++) {
        printf("%s %d\n", arr[i].name, arr[i].count);
    } */
   srand(time(NULL));//置随机数种子，并初始化随机数
   for (int i = 0; i < 80; i++) {
    int choose = rand() % 4;
    arr[choose].count++;
   }

   for (int i = 0; i < 4; i++) {
    printf("%s %d\n", arr[i].name, arr[i].count);
   }

   int max = arr[0].count;
   int index = 0;
   for (int i = 1; i < 4; i++) {
    if (max < arr[i].count) {
        max = arr[i].count;
        index = i;
    }
   }

   printf("最大值为%s %d\n",arr[index].name, arr[index].count);
}
