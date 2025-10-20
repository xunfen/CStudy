#include <stdio.h>
int main()
{
    int n;
    printf("请输入任意整数：\n");
    scanf("%d", &n);

    while (n >= 1 && n % 2 == 0)
    {
        n = n / 2;
    }

    if (n == 1) {
        printf("yes");
    }
    else {
        printf("no");
    }
    
    return 0;
}
