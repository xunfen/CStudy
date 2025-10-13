#include <stdio.h>
int main()
{
    int rowA = 5;
    int numberA = 6;

    int rowB = 5;
    int numberB = 8;

    if (rowA == rowB && (numberA - numberB == 1 || numberB - numberA == 1)) {
        printf("happy");
    }
    else {
        printf("sad");
    }
}