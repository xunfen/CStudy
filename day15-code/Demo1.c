// malloc-memory allocation 申请空间（连续）
// calloc-contiguous allocation 申请空间+数据初始化
// realloc-re-allocation 修改空间大小
// free-free 释放空间
#include <stdio.h>
#include <stdlib.h> //上面几个函数定义在stdlib头文件中
int main()
{
    // malloc
    int *p1 = malloc(100 * sizeof(int)); // 单位为字节.申请100个int类型的空间，返回一个指针指向首地址
    printf("%p\n", p1);
    // 赋值方法一
    /* for (int i = 0; i < 100; i++)
    {
        *(p1 + i) = (i + 1) * 10; // 赋值10,20,30...
    } */
    // 赋值方法二
    for (int i = 0; i < 100; i++)
    {
        p1[i] = (i + 1) * 10; // pi[i]在底层会解析成*(p1+i)
    }
    for (int i = 0; i < 100; i++)
    {
        printf("%d\n", *(p1 + i));
    }
    // 和数组类似，都是连续的，但是数组能用索引，他只能用指针偏移

    printf("================================\n");

    // calloc
    int *p2 = calloc(100, sizeof(int));
    for (int i = 0; i < 100; i++)
    {
        printf("%d\n", *(p2 + i));
    }

    printf("================================\n");

    // realloc
    int *p3 = realloc(p1,20*sizeof(int));
    for (int i = 0; i < 20; i++) {
        printf("%d\n", *(p3 + i));
    };

    printf("================================\n");

    // free
    free(p1);
    free(p2);
    free(p3);
    //空间不用了记得要释放
    return 0;
}