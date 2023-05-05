#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int i = 1;//初始化
//	while (i <= 10)//判断
//	{
//		printf("%d ", i);
//		i++;//调整
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)//for(初始化;判断;调整)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			break;//无论是否有大括号，都是退出循环
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 1;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	for (;;)//恒成立，死循环
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("hehe %d %d\n",i,j);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int x, y;//多个条件
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0/*此处为赋值，不为判断,0为假不进入循环，若k = 1则无限循环*/; i++, k++)
//	{
//		k++;
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int j = 1;
//	int n = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		j = j * i;
//	}
//	printf("%d", j);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 1;
//	int n = 0;
//	int num = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		//scanf("%d", &n);
//		for (j = 1,k = 1; j <= i/*n*/; j++)
//		{
//			k = k * j;
//		}
//		num = num + k;
//	}
//	printf("%d", num);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int j = 1;
//	int n = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		j = j * i;
//		sum = sum + j;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了！下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

int main()
{
	int k = 0;
	scanf("%d", &k);
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了！下标为：%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到了");
	}
	return 0;
}//折半查找！！！！