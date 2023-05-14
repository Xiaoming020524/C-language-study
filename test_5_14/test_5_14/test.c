#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)//¸³Öµ£¬·ÇÅÐ¶Ï
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n)
//	{
//	default:
//		printf("hehe\n");
//		break;
//	case 1:
//		printf("1\n");
//		break;
//	case 2:
//		printf("2\n");
//		break;
//	}
//	return 0;
//}

//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1:
//	{
//		b = 30;
//	}
//	case 2:
//	{
//		b = 20;
//	}
//	case 3:
//	{
//		b = 16;
//	}
//	default:
//	{
//		b = 0;
//	}
//	}
//	return b;
//}
//int main()
//{
//	int mid = func(1);
//	printf("%d\n", mid);
//	return 0;
//}

//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//	{
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default:
//			printf("hello");
//		}
//	}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}

//void Dete_size(int x, int y, int z)
//{
//	int mid = 0;
//	if (x > y)
//	{
//		if (y < z)
//		{
//			mid = y;
//			y = z;
//			z = mid;
//		}
//	}
//	else
//	{
//		mid = x;
//		x = y;
//		y = mid;
//		if (x < z)
//		{
//			mid = x;
//			x = z;
//			z = mid;
//		}
//	}
//	printf("%d %d %d", x, y, z);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	Dete_size(a, b, c);
//	return 0;
//}

//Swap(int* px, int* py)
//{
//	int mid = 0;
//	mid = *px;
//	*px = *py;
//	*py = mid;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 99; i += 3)
//	{
//		printf("%d ", i);
//	}
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = (a < b) ? a : b;
//	int m = min;
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			break;
//		}
//		m--;
//	}
//	printf("%d\n", m);
//	return 0;
//}

//int Max_common_num(int x, int y)
//{
//	int mid = 1;
//	int ret = 0;
//	while (y != 0)
//	{
//		if (x > y)
//		{
//			mid = x % y;
//			x = y;
//			y = mid;
//		}
//		else
//		{
//			ret = x;
//			x = y;
//			y = ret;
//		}
//	}
//	return x;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Max_common_num(a, b);
//	printf("%d", c);
//	return 0;
// }

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double add = 0;
//	double sum1 = 0;
//	double sum2 = 0;
//	for (i = 1; i <= 100; i += 2)
//	{
//		sum1 += 1.0 / i;
//	}
//	for (i = 2; i <= 100; i += 2)
//	{
//		sum2 += 1.0 / i;
//	}
//	add = sum1 - sum2;
//	printf("%lf\n", add);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}