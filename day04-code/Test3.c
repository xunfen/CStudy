#include <stdio.h>
int main()
{
    int num;
    printf ("请输入一个数字：");
    scanf("%d", &num);
    int boy1 = num >= 0 ? num : -num;
    printf ("绝对值是：%d\n", boy1);
    int boy2 = num % 3;
    printf ("余数是：%d\n", boy2);
    int boy3 = num * 10;
    printf ("乘以10的结果是：%d\n", boy3);
    return 0;
}