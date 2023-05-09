#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//-s设置关机 -t设置时间
again:
	printf("请注意，你的电脑将在60秒后关机，如果输入：我是猪，可取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}