#include <stdio.h>

void say(int count)
{
    for (int i = 0; i < count; i++){
        printf("xunfen\n");
    }
}

int main()
{
    printf("请输入次数：\n");
    int count;
    scanf("%d", &count);
    say(count);
    return 0;
}
