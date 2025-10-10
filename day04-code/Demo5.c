#include <stdio.h>
int main()
{
    int i;
    /* i = 3, i++, ++i;
    printf ("%d", i); */
    printf ("%d", (i = 3, i++, ++i));
    return 0;
}