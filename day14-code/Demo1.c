#include <stdio.h>
#include <string.h>

union MoneyType
{
    int moneyI;
    double moneyD;
    char moneyStr[100];
};
typedef union MoneyType2
{
    int moneyI;
    double moneyD;
    char moneyStr[100];
}MT;
int main()
{
    union MoneyType money;
    money.moneyI = 100;
    printf("%d\n",money.moneyI);
    money.moneyD = 100.0;
    printf("%f\n",money.moneyD);
    strcpy(money.moneyStr,"一百万");
    printf("%s\n",money.moneyStr);
    printf("\n=============================\n");
    MT mt;
    mt.moneyI = 100;
    printf("%d\n",mt.moneyI);
    
    mt.moneyD = 100.0;
    printf("%f\n",mt.moneyD);
    
    strcpy(mt.moneyStr,"一百万");
    printf("%s\n",mt.moneyStr);

   /*  mt.moneyI = 100;
    mt.moneyD = 100.0;
    strcpy(mt.moneyStr,"一百万");
    printf("%d\n",mt.moneyI);
    printf("%f\n",mt.moneyD);
    printf("%s\n",mt.moneyStr);
} */
//因为联合体内的成员共有同一块内存，所以只保留了最后的一百万，所以moneyI和moneyD的值都为随机值
//所以每次只能给一个值赋值，每次只能读取一个值
}