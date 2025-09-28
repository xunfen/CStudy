#include <stdio.h>
int main()
{
    float a = 3.14F;
    printf("%f\n",a);
    printf("%.2f\n",a);

    double b = 3.15159;
    printf("%lf\n",b);
    printf("%.5lf\n",b);

    //MinGW对long double支持可能有限，不支持long double类型
    long double c = 3.141592653589793238462L;
    printf("%Lf\n",c);
    printf("%.10Lf\n",c);
    /* int test = sizeof(long double);
    int test2 = sizeof(c);
    printf("%d\n",test);
    printf("%d\n",test2); */
    printf("%zu\n",sizeof(long double));
    printf("%zu\n",sizeof(c));


    return 0;
}