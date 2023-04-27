#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//顺序结构、选择结构、循环结构
//int main()
//{
//	int a = 10;
//	if (a == 10)//()里为非0，条件为真，执行语句;注意区分赋值符号与等号
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//
//	int age = 10;
//	if (age > 18)
//		printf("成年\n");
//	else
//	{
//		printf("未成年\n");
//		printf("不能饮酒\n");//跟多条语句时，需要带上大括号(代码块)
//	}
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("青少年\n");
//	}
//	else if(age >= 18 && age < 28)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 28 && age < 40)
//	{
//		printf("壮年\n");
//	}
//	else if (age >= 40 && age < 60)
//	{
//		printf("中年\n");
//	}
//	else if (age >= 60 && age < 100)
//	{
//		printf("老年\n");
//	}
//	else
//	{
//		printf("老寿星\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}//输出haha

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else//else与最近的if进行匹配
//		printf("haha\n");
//	return 0;
//}//无输出

//int main()
//{
//	char firstname[20] = { 0 };
//	char first_name[20] = { 0 };
//	char FirstName[20] = { 0 };//规范
//	return 0;
//}

//int test()
//{
//	int a = 4;
//	if (a == 4)
//		return 1;
//	return 0;//if值为真，返回1；没有else，也在做判断
//}
//
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//	return 0;
//}

//int main()
//{
//	int num = 3;
//	if (5 == num)//避免了if(num = 5)赋值问题
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	printf("请输入一个数：");
//	scanf("%d", &num);
//	if (num == 0)
//	{
//		printf("该数为0\n");
//	}
//	else if(num % 2 == 0)
//	{
//		printf("该数为偶数\n");
//	}
//	else
//	{
//		printf("该数为奇数\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for ( i = 1; i < 51; i++)
//	{
//		if ((2 * i - 1) % 2 > 0)
//		{
//			printf("%d ", 2 * i - 1);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//	return 0;
//}