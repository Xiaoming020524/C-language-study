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
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "welcome to hip!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;��Ϊ��sizeofʱ�����ȡ��'\0'���ʣ�-2
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
//		printf("���������룺");
//		scanf("%s", arr2);
//		if (strcmp(arr1,arr2) == 0)
//		//�Ƚ������ַ����Ƿ���ȣ�����ʹ��==����Ӧ��ʹ��һ���⺯����strcmp
//		//�������ֵΪ0�����ʾ�����ַ������
//		{
//			printf("������ȷ���ɹ���¼!\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	return 0;
//}