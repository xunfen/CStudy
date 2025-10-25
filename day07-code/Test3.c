#include <stdio.h>

double area(double r)
{
    return 3.14 * r * r;
}

int main()
{
    printf("%.2f\n", area(5));
}
