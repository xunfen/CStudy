#include <stdio.h>
int main()
{
    //在C语言中非零的整数通常表示成立（一般采用1表示成立），而0表示不成立
    if (1) {
        printf("1 is true\n");//代码执行
    }

    if (0) {
        printf("0 is false\n");//代码未执行
    }
    return (0);
}