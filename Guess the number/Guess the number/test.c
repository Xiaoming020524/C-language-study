#define _CRT_SECURE_NO_WARNINGS

//电脑产生一个随机数(1~100)
//反馈:猜大了或者猜小了

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void menu()
{
	printf("******************************\n");
	printf("********    1.play    ********\n");
	printf("********    0.exit    ********\n");
	printf("******************************\n");
}

void game()//游戏主体
{
	int guess = 0;
	//生成随机数
	int ret = rand() % 100 + 1;//生成随机函数，范围为0~RAND_MAX(32767);
	
	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)/*强制转换为int*/time(NULL));//NULL空指针

	//循环选择
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,重新选择\n");
			break;
		}
	} while (input);
	return 0;
}