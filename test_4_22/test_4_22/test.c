#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	float a = 7 / 2.0;//��������������һλΪ������������Ϊ������
//	int b = 7 % 2;//ȡģ��������ֻ��������
//	printf("%.2f\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 0;//��ʼ��
//	a = 20;//��ֵ
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
//	printf("%d\n", sizeof(arr));//40 ���������С��10������
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
//	int a = (int)3.14;//���3
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
//	if (a && b)//&& �߼��� - ���ң�abͬʱΪ��
//	{
//		printf("hehe\n");
//	}
//	if (a || b)//|| �߼��� - ���ߣ�ab����һ������ͬʱΪ��
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 100;
//	int b = 20;
//	int r = (a > b ? a : b);//��Ŀ������
//	printf("%d\n", r);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3);//���������μ��㣬���ʽΪ���һ�����
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 3;
//	arr[n] = 20;//����Ԫ��ʱ��[ ]�±����ò�����
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int sum = Add(2, 3);//( )�������ò�������Add,2,3����( )�Ĳ�����
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int void = 10;//�����漰�ؼ���
//  int 2b = 0;//�������������ֿ�ͷ������ǰ���_
//	return 0;
//}