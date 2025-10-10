#include <stdio.h>
int main()
{
    int i = 10 , j = 5;
    int k = i++ + ++i - --j - i--;

    printf("%d",k);
    return 0;
}