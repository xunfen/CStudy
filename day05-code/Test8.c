#include <stdio.h>
int main()
{
    printf("请输入第一个数字代表区间起始：\n");
    int start;
    scanf("%d", &start);
    printf("请输入第二个数字代表区间结束：\n");
    int end;
    scanf("%d", &end);
    int num = 0;
    for (int i = start; i <= end; i++)
    {
        if (i % 6 == 0 && i % 8 == 0)
        {
            num++;
        }
    }
    printf("区间内共有%d个数满足条件\n", num);
    return 0;
}
