#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//-s���ùػ� -t����ʱ��
again:
	printf("��ע�⣬��ĵ��Խ���60���ػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}