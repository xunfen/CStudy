#include <stdio.h>
int main()
{
    char strArr[5][100] = {
        "zhangsan",
        "lisi",
        "wangwu",
        "zhaoliu",
        "qianqi"
    };

    for (int i = 0; i < 5; i++) {
        char* str = strArr[i];
        printf("%s\n", str);
    }

    printf("===========================\n");

    //CAse2
    char* strBrr [5] = {
        "zhangsan",
        "lisi",
        "wangwu",
        "zhaoliu",
        "qianqi"
    };

    for (int i = 0; i < 5; i++) {
        char* str = strBrr[i];
        printf("%s\n", str);
    }
}