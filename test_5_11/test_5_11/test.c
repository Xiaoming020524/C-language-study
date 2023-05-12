#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int i = 2004 % 100;
//	printf("%d", i);
//	return 0;
//}
//
//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int year = 1;
//	while (year)
//	{
//		scanf("%d", &year);
//		int is_leap_year(year) = is_leap_year(year);
//		if (is_leap_year(year))
//		{
//			printf("%d年是闰年\n", year);
//		}
//		else
//		{
//			printf("%d年不是闰年\n", year);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= year + 8; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			break;
//		}
//	}
//	for (; year <= 2000; year += 4)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//int is_leap_year(int x)
//{
//	if ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
////之所以不在函数内打印，是因为要保证函数的单一性，例如未来使用该函数时，只想进行判断，而非打印
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= year + 8; year++)
//	{
//		if (is_leap_year(year))
//			break;
//	}
//	for (; year <= 2000; year += 4)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

int binsearch(int arr[], int x)
{
	int mid = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		mid = ((right - left) / 2 + left);
		if (x < arr[mid])
		{
			right = mid - 1;
		}
		else if (x > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return 0;
}

int main()
{
	int i = 1;
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	scanf("%d", &i);
	int red = binsearch(arr1, i);
	if (red)
	{
		printf("找到了！下标为%d\n",red);
	}
	else
	{
		printf("未找到\n");
	}
	return 0;
 }

//int binsearch(int arr[], int x, int sz)
//{
//	int mid = 0;
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		mid = ((right - left) / 2 + left);
//		if (x < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (x > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	scanf("%d", &i);
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int red = binsearch(arr1, i, sz);
//	if (red)
//	{
//		printf("找到了！下标为%d\n", red);
//	}
//	else
//	{
//		printf("未找到\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = sizeof(arr1);
//	printf("%d\n", a);
//	int b = sizeof(arr1[0]);
//	printf("%d\n", b);
//	return 0;
//}