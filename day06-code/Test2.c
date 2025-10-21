#include <stdio.h>
int main()
{
    for (int i = 1; i <=5;i++){
        if (i == 3) {
            continue;//跳过3
        }
        printf("正在吃第%d个包子\n",i);
    }
}