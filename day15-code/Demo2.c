#include <stdio.h>
#include <stdlib.h>
int main()
{
    int count = 0;
    int number = 1024 * 1024 * 1024;
    while (1)
    {
        int *p = malloc(number);
        count++;
        if (p == NULL)
        {
            printf("内存申请失败\n");
            break;
        }
        printf("内存%d申请成功%p\n", count, p);
    }
}
