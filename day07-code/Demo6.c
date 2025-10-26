#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    //设置随机数种子
    srand(time(NULL));
    //获取随机数
    int num = rand();
    //输出
    printf("%d\n",num);

    for (int i = 0; i < 10; i++) {
        printf("%d\n",rand());
    }

    return 0;
}