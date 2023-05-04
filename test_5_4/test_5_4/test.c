#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//			printf("星期一\n");
//			break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期天\n");
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("weekday\n");
//			break;
//		case 6:
//		case 7:
//			printf("weekend\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//		case 1:
//			m++;
//		case 2:
//			n++;
//		case 3:
//			switch (n)
//			{
//				case 1:
//					n++;
//				case 2:
//					m++; n++;
//					break;
//			}
//		case 4:
//			m++;
//			break;
//		default:
//			break;
//	}
//	printf("m = %d,n = %d\n", m, n);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;//执行时，永久终止循环
//
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//			continue;//执行时，跳过本次循环，进行判断
//
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//	printf("%c\n", ch);
//	putchar(ch);
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", &password);
//
//	//getchar();//读取了输入缓冲区忠的\n
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("请确认密码(Y/N)：");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}

//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')//只读取数字
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//sizeof(arr) - 计算数组总大小，单位是字节
//	//sizeof(arr[0]) - 计算的是数组元素的大小
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	scanf("%4d%2d%2d", &y, &m, &d);
//	printf("year=%d\nmonth=%02d\ndate=%02d\n", y, m, d);
//	return 0;
//}

//int main()
//{
//	int id = 0;
//	float clanguage = 0.0f;
//	float math = 0.0f;
//	float english = 0.0f;
//	scanf("%d;%f,%f,%f", &id, &clanguage, &math, &english);
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", id, clanguage, math, english);
//	return 0;
//}

//int main()
//{
//	int n = printf("Hello World!");
//	printf("\n%d", n);
//	return 0;
//}

//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//
//int main()
//{
//	int i = 0;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//	return 0;
//}

//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout << \"Hello world!\" << endl;\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	if (a > b && a > c && a > d)
//	{
//		printf("%d", a);
//	}
//	else if (b > a && b > c && b > d)
//	{
//		printf("%d", b);
//	}
//	else if (c > a && c > b && c > d)
//	{
//		printf("%d", c);
//	}
//	else if (d > a && d > c && d > b)
//	{
//		printf("%d", d);
//	}
//	return 0;
//}

//int MAX(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//
//	int a, b, c, d;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	int max = MAX(a, MAX(b, MAX(c, d)));
//	printf("%d", max);
//
//	return 0;
//}

//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d", max);
//	return 0;
//}

//int main()
//{
//	double r = 0.0f;
//	double q = 0.0f;
//	scanf("%lf", &r);
//	q = 4 / 3.0 * 3.1415926 * r * r * r;
//	printf("%.3lf", q);
//	return 0;
//}

//int main()
//{
//	int h = 0;
//	int k = 0;
//	scanf("%d%d", &k, &h);
//	float bmi = k / (h / 100.0) / (h / 100.0);
//	//整型除以100.0类型转变为浮点型
//	printf("%.2f", bmi);
//	return 0;
//}