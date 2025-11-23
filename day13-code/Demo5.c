#include <stdio.h>
#include <string.h>

struct message//结构体嵌套时，务必把嵌套的写在上面
{
    char phone[12];
    char email[100];
};


typedef struct Student {
    char name[20];
    int age;
    char gender;
    double height;
    struct message msg;
} S;

int main() {
    S stu1;
    strcpy(stu1.name, "zhangsan");
    stu1.age = 23;
    stu1.gender = 'm';
    stu1.height = 1.75;
    strcpy(stu1.msg.phone, "12345678901");
    strcpy(stu1.msg.email, "6666666@qq.com");

    printf("学生的信息为：\n");
    printf("姓名：%s\n", stu1.name);
    printf("年龄：%d\n", stu1.age);
    printf("性别：%c\n", stu1.gender);
    printf("身高：%.2f\n", stu1.height);
    printf("手机：%s\n", stu1.msg.phone);
    printf("邮箱：%s\n", stu1.msg.email);
    
    printf("==========================================\n");

    S stu2 = {"lisi", 24, 'w', 1.68, {"12345678902", "888888888@qq.com"}};
    printf("\n学生的信息为：\n");
    printf("姓名：%s\n", stu2.name);
    printf("年龄：%d\n", stu2.age);
    printf("性别：%c\n", stu2.gender);
    printf("身高：%.2f\n", stu2.height);
    printf("手机：%s\n", stu2.msg.phone);
    printf("邮箱：%s\n", stu2.msg.email);
    return 0;
}