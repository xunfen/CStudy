#include <stdio.h>
struct student
{
    char name[20];
    int age;
};
int main()
{
    struct student s1 = {"zhangsan", 23};
    struct student s2 = {"lisisi", 24};
    struct student s3 = {"wangwu", 25};

    struct student stuArr[3] = {s1, s2, s3};

    for (int i = 0; i < 3; i++) {
        printf("姓名:%s, 年龄:%d\n", stuArr[i].name, stuArr[i].age);
    }

    return 0;
}
