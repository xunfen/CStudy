#include <stdio.h>
#include <string.h>
struct girlFriend
{
    char name[100];
    int age;
    char gender;
    double height;
};
int main()
{
    struct girlFriend gf1;
    strcpy(gf1.name, "小诗诗");//直接使用 = 尝试赋值会试图改变数组名这个地址常量，这是不允许的操作。
    gf1.age = 18;
    gf1.gender = 'F';//字符里面不能写中文
    gf1.height = 1.65;
    printf("小诗诗的信息：\n");
    printf("姓名：%s\n", gf1.name);
    printf("年龄：%d\n", gf1.age);
    printf("性别：%c\n", gf1.gender);
    printf("身高：%.2f\n", gf1.height);

    printf("==================\n");

    struct girlFriend gf2 = {"小丹丹", 19, 'F', 1.68};
    printf("小丹丹的信息：\n");
    printf("姓名：%s\n", gf2.name);
    printf("年龄：%d\n", gf2.age);
    printf("性别：%c\n", gf2.gender);
    printf("身高：%.2f\n", gf2.height);

    return 0;
}
