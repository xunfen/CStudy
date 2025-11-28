#include <stdio.h>

int main()
{
    //第一步：打开文件
    FILE* file = fopen("C:\\Users\\xunfen\\Desktop\\CStudey\\day16-code\\a.txt","r");
    //fopen的模式：r只读，w只写，a追加，rb二进制读，wb二进制写（其中带w的如果文件存在会覆盖，不带w的如果文件不存在会创建）
    //第二步：读取数据
    //fgetc一次读取一个字符，读不到返回-1
    int c;// = fgetc(file);
    while ((c = fgetc(file)) != -1){
        printf("%c\n",c);
    }
    //printf("%c",c);
    //第三步：关闭文件
    fclose(file);
}