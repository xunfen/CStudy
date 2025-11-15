#include <stdio.h>
void swap (void* p1, void* p2,int len);
int main()
{
    int a = 10;
    short b = 20;

    int *p1 = &a;
    short *p2 = &b;
    // char* p3 = p2;//会报错，指针类型不对
    char *p4 = (char *)p2; // 强制转换

    printf("%d\n", p1);
    printf("%d\n", p2);
    printf("%d\n", *p4);

    printf("===================\n", p1);

    void *p5 = p1;
    void *p6 = p2;
    //会报错，因为void类型的指针无法获取变量里面的数据。也不能进行加减运算
    /* printf("%d\n", *p5);
    printf("%d\n", *p6); */
    swap(p5, p6, sizeof(short));
    printf("%d\n", *p1);
    printf("%d\n", *p2);
    
}

void swap (void* p1, void* p2,int len) {
    char *pc1 = p1;
    char *pc2 = p2;
    for (int i = 0; i < len; i++) {//for循环逐字节交换，因为接收到俩个不同类型的指针后要逐个字节交换，不然就是只交换第一个字节，交换完会变得很奇怪
        char temp = *pc1;
        *pc1 = *pc2;
        *pc2 = temp;

        pc1++;//移动到下一个字节
        pc2++;//移动到下一个字节
    }


}