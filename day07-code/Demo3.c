#include <stdio.h>

int sum(int num1,int num2)
{
    int sum = num1 + num2;
    return sum;
}

int main()
{
    int result = sum(10, 20);
    printf("Sum is %d\n", result);
}
