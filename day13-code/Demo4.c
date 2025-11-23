#include<stdio.h>
#include<string.h>


typedef struct Student
{
	char name[100]; 
	int age;
}S;


//// 细节：因为这个函数用到了结构体，所以函数的申明必须写在结构体的下面，否则代码会报错
//void method(S st);
void method2(S* p);


int main()
{
	
	/*
		定义一个结构体表示学生
		学生的属性：姓名、年龄
		要求：
			定义一个函数，修改学生中的数据

	*/

	// 1.定义一个学生
	S stu;

	// 2.给学生赋初始值
	strcpy(stu.name, "aaa");
	stu.age = 0;

	// 3.输出打印
	printf("学生的初始数据为：%s, %d\n", stu.name, stu.age);// aaa  0

	// 4.调用函数修改学生中的数据
	method2(&stu);
	
	// 5.输出打印
	printf("学生的信息修改为：%s, %d\n", stu.name, stu.age);// zhangsan 23

	return 0;
}



// 细节：
//		如果函数中写的是结构体类型的变量，相当于是定义了一个新的变量
//		此时是把main函数中stu中的数据，传递给了method函数，并把stu中的数据赋值给了新的变量st
//		我们在函数中，仅仅是修改了变量st中的值，对main函数中stu的值，是没有进行修改的
/* void method(S st)
{
	printf("接收到main函数中学生的初始数据为：%s, %d\n", st.name, st.age);// aaa  0

	// 修改
	printf("请输入要修改的学生名字\n");
	scanf("%s", st.name);
	printf("请输入要修改的学生年龄\n");
	scanf("%d", &(st.age));

	printf("在method函数中修改之后，学生的信息为：%s, %d\n", st.name, st.age);// zhangsan 23
} */


// 如果要在函数中修改stu的值，此时就不要再定义新的变量了
// 直接接收stu的内存地址，通过内存地址就可以修改stu中的数据了
// 指针p里面记录的是main函数中stu的内存地址（stu 学生）
void method2(S* p)
{
	printf("接收到main函数中学生的初始数据为：%s, %d\n", (*p).name, (*p).age);// aaa  0

	// 修改
	printf("请输入要修改的学生名字\n");
	scanf("%s", (*p).name);//字符串本身就是传递首地址值，无需取地址符&
	printf("请输入要修改的学生年龄\n");
	scanf("%d", &((*p).age));//int 等其他类型类型，需要取地址符&

	printf("在method函数中修改之后，学生的信息为：%s, %d\n", (*p).name, (*p).age);// zhangsan 23
}