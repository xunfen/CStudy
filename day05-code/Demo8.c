#include <stdio.h>
int main()
{
    int i = 1;
    do 
    {
        printf("%d\n", i);
        i++;
    } while (i <= 5);
    //先执行再判断，循环体至少执行一次
}