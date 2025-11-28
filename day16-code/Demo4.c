#include <stdio.h>
int main()
{
    FILE* file = fopen("C:\\Users\\xunfen\\Desktop\\CStudey\\day16-code\\a.txt","w");
    int c = fputc(97,file);
    printf("%d\n",c);
    int n = fputs("666艹",file);//写出成功返回非负数,但是一般忽略返回值
    printf("%d\n",n);
    char arr[1024] = "hello world";
    int n2 = fwrite(arr,1,11,file);
    printf("%d\n",n2);
    fclose(file);
    
}