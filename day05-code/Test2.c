#include <stdio.h>
int main()
{
    int blood = 200;
    int damage = 80;
    int restore = 100;

    blood = blood - damage + restore;
    if (blood > 200) {
        blood = 200;
    }
    printf("Blood: %d", blood);
}