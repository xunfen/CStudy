#include <stdio.h>
int main()
{
    //质数：1.只能被1和自身整除的数
    printf("输入一个正整数：");
    int num;
    scanf("%d",&num);

    int count = 0;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            count++;
        }
    }

    if (count == 0) {
        printf("是质数\n");
    }
    else {
        printf("不是质数\n");
    }
}
