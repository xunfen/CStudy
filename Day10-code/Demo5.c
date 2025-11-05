#include <stdio.h>
void getResult(int a, int b, int *p, int *q);
int main()
{
    int a = 10;
    int b = 3;
    int p,q;
    getResult(a, b, &p, &q);
    printf("%d %d\n", p, q);
}

void getResult(int a, int b, int *p, int *q)
{
    *p = a / b;
    *q = a % b;
}
