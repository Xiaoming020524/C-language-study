#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid =  left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了！下标为：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到！\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "welcome to hip!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;因为用sizeof时，会读取到'\0'，故！-2
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "123456";
//	char arr2[10] = { 0 };
//	int i = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", arr2);
//		if (strcmp(arr1,arr2) == 0)
//		//比较两个字符串是否相等，不能使用==，而应该使用一个库函数：strcmp
//		//如果返回值为0，则表示两个字符串相等
//		{
//			printf("密码正确，成功登录!\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	return 0;
//}