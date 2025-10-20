#include <stdio.h>
int main()
{
    int dividend,divisor;
    printf("请输入被除数dividen：");
    scanf("%d",&dividend);
    printf("请输入除数divisor：");
    scanf("%d",&divisor);
    int shang = 0,yushu = 0;
    while (dividend >= divisor) {
        shang += 1;
        dividend -= divisor;
    }
    yushu = dividend;
    printf("商为：%d\n余数为：%d\n",shang,yushu);
}
