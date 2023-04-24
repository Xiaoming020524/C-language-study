#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//typedef unsigned int uint;
//
//int mian()
//{
//	unsigned int num1 = 0;
//	uint num2 = 1;
//	return 0;
//}

//void test()//void不需要任何返回
//{
//	static int a = 1;//static修饰局部变量
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//extern int g_val;//声明外部符号
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//	return 0;
//}

//int main()
//{
//	register int num = 3;//建议！！！3存放在寄存器中
//
//	return 0;
//}

//#define NUM 100
//
//int main()
//{
//	printf("%d\n", NUM);
//	int n = NUM;
//	printf("%d\n", n);
//  int arr[NUM] = { 0 };
//	return 0;
//}

//#define ADD(x,y) ((x)+(y))//宏,ADD为宏名,xy为宏的参数，无类型，最后为宏体
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);//宏替换 -> int c = ((a)+(b))
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;//向内存申请4个字节，存储10
//	printf("%p\n", &a);
//	int* p = &a;//int说明p指向的对象是int类型
//	*p = 20;//解引用操作符
//	printf("%d\n", a);
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(double*));
//	//不管是什么类型的指针，都是指针变量，用来存放地址
//	//大小取决于一个地址存放的时候需要的空间
//	//32位机器上的地址：32bit位-4byte
//	//64位机器上的地址：64bit位-8byte
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//	//char tele[12];
//
//	int tele;
//};//结构体
//
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %d\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	printf("%s %d %s %d\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//
//int main()
//{
//	//struct Stu s = { "zhangsan",20,"nan","123456789" };
//	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//
//	struct Stu s = { "zhangsan",20,"man",123456789 };
//	printf("%s %d %s %d\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("输入：");
//	scanf("%d %d", &a, &b);
//	int c = a / b;
//	int d = a % b;
//	printf("输出：%d %d\n",c,d);
//	return 0;
//}