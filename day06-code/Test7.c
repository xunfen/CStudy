#include <stdio.h>
int main()
{
    for (int i = 0; i <= 1000; i++) {
        int num = i;
        int sum = 0;
        while (num != 0) {
            sum = sum + num % 10;
            num = num / 10;
        }
        if (sum == 15) {
            printf("%d\n", i);
            sum = 0;
        }
    }
}