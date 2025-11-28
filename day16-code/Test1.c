#include <stdio.h>
int main()
{
    FILE *file = fopen("C:\\Users\\xunfen\\Desktop\\CStudey\\day16-code\\a.txt", "rb");
    FILE *target = fopen("C:\\Users\\xunfen\\Desktop\\CStudey\\day16-code\\target\\a.txt", "wb");
    char arr[1024];
    int n;
    while ((n = fread(arr, 1, 1024, file)) != 0)
    {
        fwrite(arr, 1, n, target);
    }
    fclose(file);
    fclose(target);
}