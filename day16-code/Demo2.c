#include <stdio.h>
int main()
{
    FILE* file = fopen("C:\\Users\\xunfen\\Desktop\\CStudey\\day16-code\\a.txt","r");
    char arr[1024];
    //每次读取一行数据，以换行符为准
    char* str1 = fgets(arr,1024,file);
    printf("%s\n",str1);
    char* str2 = fgets(arr,1024,file);
    printf("%s\n",str2);
    char* str3 = fgets(arr,1024,file);
    printf("%s\n",str3);
    fclose(file);
}