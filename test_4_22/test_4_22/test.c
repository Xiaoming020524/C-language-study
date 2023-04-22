#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	float a = 7 / 2.0;//除操作符，其中一位为浮点数，则结果为浮点数
//	int b = 7 % 2;//取模操作符，只能是整数
//	printf("%.2f\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 0;//初始化
//	a = 20;//赋值
//	a += 3;//a = a + 3;
//	printf("%d\n", a);
//	a -= 3;//a = a - 3;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int flag = 0;
//	if (!flag)
//	{
//		printf("hello world!\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = -10;
//	int b = -a;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(int));
//
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40 整个数组大小，10个整形
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	int c = 10;
//	int d = ++c;
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//输出3
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	if (a == 3)
//	{
//		printf("hehe\n");
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 20;
//	if (a && b)//&& 逻辑与 - 并且，ab同时为真
//	{
//		printf("hehe\n");
//	}
//	if (a || b)//|| 逻辑或 - 或者，ab满足一个或者同时为真
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 100;
//	int b = 20;
//	int r = (a > b ? a : b);//三目操作符
//	printf("%d\n", r);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3);//从左到右依次计算，表达式为最后一个结果
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 3;
//	arr[n] = 20;//访问元素时，[ ]下标引用操作符
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int sum = Add(2, 3);//( )函数调用操作符，Add,2,3都是( )的操作数
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int void = 10;//×，涉及关键字
//  int 2b = 0;//×，不能以数字开头，可在前面加_
//	return 0;
//}