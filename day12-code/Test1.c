#include <stdio.h>
#include <string.h>
int main()
{
    char *rightUsername = "zhangsan";
    char *rightPassword = "123456qwer"; // 由于账号密码的特殊需求。写成指针的形式防止修改

    char username[100];
    char password[100]; // 如果这里用指针，娜那么创建之后不能修改，故不用指针

    int count = 0;
    while (count < 3)
    {
        printf("请输入账号：");
        scanf("%s", username);
        printf("请输入密码：");
        scanf("%s", password);
        if (strcmp(username, rightUsername) != 0 && strcmp(password, rightPassword) != 0)
        {
            printf("账号或密码错误！剩余%d次机会！\n", 2 - count);
            count++;
        }
        else
        {
            printf("登录成功！\n");
            return 0;
        }
    }
}