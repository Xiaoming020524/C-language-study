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

//void test()//void����Ҫ�κη���
//{
//	static int a = 1;//static���ξֲ�����
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

//extern int g_val;//�����ⲿ����
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
//	register int num = 3;//���飡����3����ڼĴ�����
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

//#define ADD(x,y) ((x)+(y))//��,ADDΪ����,xyΪ��Ĳ����������ͣ����Ϊ����
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);//���滻 -> int c = ((a)+(b))
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;//���ڴ�����4���ֽڣ��洢10
//	printf("%p\n", &a);
//	int* p = &a;//int˵��pָ��Ķ�����int����
//	*p = 20;//�����ò�����
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
//	//������ʲô���͵�ָ�룬����ָ�������������ŵ�ַ
//	//��Сȡ����һ����ַ��ŵ�ʱ����Ҫ�Ŀռ�
//	//32λ�����ϵĵ�ַ��32bitλ-4byte
//	//64λ�����ϵĵ�ַ��64bitλ-8byte
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
//};//�ṹ��
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
//	printf("���룺");
//	scanf("%d %d", &a, &b);
//	int c = a / b;
//	int d = a % b;
//	printf("�����%d %d\n",c,d);
//	return 0;
//}