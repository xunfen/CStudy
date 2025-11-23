#include <stdio.h>
typedef struct Ultraman
{
    char name[20];
    int attack;
    int defences;
    int blood;
} M;

int main()
{
    M taro = {"泰罗", 100, 90, 500};
    M rem = {"雷姆", 90, 80, 450};
    M eddie = {"艾迪", 120, 70, 600};
    
    M arr[3] = {taro, rem, eddie};

    // 修改后的打印格式
    printf("姓名\t攻击\t防御\t血量\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\t%d\t%d\t%d\n", arr[i].name, arr[i].attack, arr[i].defences, arr[i].blood);
    }
    
    return 0;
}