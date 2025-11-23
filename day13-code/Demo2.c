#include <stdio.h>
typedef struct girlfriend{
    char name[20];
    int age;
} gf;
typedef struct {
    char name[20];
    int age;
} boy;

int main() {
    gf gf1 = {"Jessica", 18};
    boy boy1 = {"James", 18};
    printf("Name: %s, Age: %d\n", gf1.name, gf1.age);
    printf("Name: %s, Age: %d\n", boy1.name, boy1.age);
}
