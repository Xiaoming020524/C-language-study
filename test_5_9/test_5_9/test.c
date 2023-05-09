#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<math.h>

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	strcpy(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr[20] = "hello world";
//	memset(arr + 6, 'x', 3);
//	printf("%s\n", arr);
//	return 0;
//}

//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//	if (x > y)
//	{
//		printf("%d", x);
//	}
//	else if (x < y)
//	{
//		printf("%d",y);
//	}
//	else
//	{
//		printf("一样大\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);
//	get_max(x, y);
//	return 0;
//}

//void exchange(int x, int y)
//{
//	int mid = 0;
//	mid = x;
//	x = y;
//	y = mid;
//	//x,y形参，当实参传递给形参时，形参是实参的一份临时拷贝，形参的修改不会影响实参
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("x = %d\n", a);
//	printf("y = %d\n", b);
//	//a,b实参
//	exchange(a, b);
//	printf("x = %d\n", a);
//	printf("y = %d\n", b);
//	return 0;
//}

//void exchange(int* px, int* py)
//{
//	int z = *px;
//	*px = *py;
//	*py = z;
//}
//
//	int Add(int x, int y)
//	{
//		return (x + y);
//	}
// 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int num = Add(a, b);
//  printf("%d\n", num);
//	scanf("%d%d", &a, &b);
//	exchange(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

//void judge(int x)
//{
//	while (x)
//	{
//		int i = 0;
//		int mid = 1;
//		scanf("%d", &x);
//		for (i = 3; i < sqrt(x); i+=2)
//		{
//			if (x % i == 0)
//			{
//				printf("%d不是素数\n", x);
//				mid = 0;
//				break;
//			}
//		}
//		if (mid == 1)
//		{
//			printf("%d是素数\n", x);
//		}
//	}
//}
//
//int main()
//{
//	int n = 1;
//	judge(n);
//	return 0;
//}

is_prime(int x)
{
	int j = 0;
	for (j = 3; j <= sqrt(x); j += 2)
	{
		if (x % j == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2)
	{
		if (is_prime(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}