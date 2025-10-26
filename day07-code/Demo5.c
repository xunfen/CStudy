#include <stdio.h>
#include <time.h>
int main()
{
    long long res = time(NULL);
    printf("%lld\n", res);//返回时间戳
}