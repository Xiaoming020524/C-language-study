#define _CRT_SECURE_NO_WARNINGS

//���Բ���һ�������(1~100)
//����:�´��˻��߲�С��

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

void game()//��Ϸ����
{
	int guess = 0;
	//���������
	int ret = rand() % 100 + 1;//���������������ΧΪ0~RAND_MAX(32767);
	
	while (1)
	{
		printf("������֣�");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)/*ǿ��ת��Ϊint*/time(NULL));//NULL��ָ��

	//ѭ��ѡ��
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,����ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}