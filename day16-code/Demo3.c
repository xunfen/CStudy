#include <stdio.h>
int main()
{
    FILE* file = fopen("C:\\Users\\xunfen\\Desktop\\CStudey\\day16-code\\a.txt","r");
    char arr[1024];
    int n;// = fread(arr,1,1024,file);//读取时会尽可能把数组装满，返回读到的字节个数
    /* printf("%s\n",arr);
    printf("%d\n",n); */
    while ((n = fread(arr,1,1024,file))!= 0){
        for(int i = 0; i < n; i++) {
            printf("%c",arr[i]);
        }
    }
    fclose(file);
}