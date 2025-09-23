#include <stdio.h>
int main()
{
    // printf("参数1","参数2")；
    // 其中：参数1为输出内容最终样式，以字符串形式体现
    //        参数2为选填，其中为填补的内容
    printf("这是整型%d\n", 6);
    printf("这是实型%f\n", 1.93);
    printf("这是字符串%s\n", "hello world");
    printf("这是字符%c\n", 'a');
    printf("%d", 18 + 18);
    return 0;
}