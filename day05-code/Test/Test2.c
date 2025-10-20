#include <stdio.h>
int main()
{
    double weight = 0.1;
    int count = 0;
    while (weight <= 8844430) {
        weight *= 2;
        count++;
    }
    printf("count = %d\n", count);
    printf("weight = %.2f\n", weight);
}
