#include <stdio.h>
int main()
{
    printf ("请输入你女朋友名字：");
    char name[100];
    scanf("%s",&name);

    //字符串变量定义方式：
    //数据类型 变量名[大小] = "字符串";
    //内存大小占用计算方式：
    //英文：一个字母占用一个字节
    //中文：一个汉字占用两个字节(默认)
    //结束标记：一个字节
    //其实可以随便写，写大一点，占用不到那么多就没问题
    /* char str[4] = "aaa";
    printf("%s\n",str);
    printf("%zu\n",sizeof(str)); */

    printf("你女朋友的名字是：%s\n",name);

    return 0;
}