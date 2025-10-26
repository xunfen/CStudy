#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{ 
    srand(time(NULL));
    int num = rand()%100+1;
    int guess;
    while (1) {
        printf("请输入数字：");
        scanf("%d",&guess);
        if (guess > num) {
            printf("猜大了\n");
        } else if (guess < num) {
            printf("猜小了\n");
        }   else {
            printf("猜对了\n");
            break;
        }

    }
    return 0;
}
