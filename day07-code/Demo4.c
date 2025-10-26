#include <stdio.h>
#include <math.h>
int main()
{
    int a = pow(2, 3);
    printf("%d\n", a);

    int b = sqrt(9);
    printf("%d\n", b);

    double c = ceil(4.6);//向上取整
    printf("%f\n", c);

    double d = floor(4.6);//向下取整
    printf("%f\n", d);

    int e = abs(-4);//整数
    printf("%d\n", e);

    double f = fabs(-4.6);//浮点数
    printf("%f\n", f);

    return 0;
}