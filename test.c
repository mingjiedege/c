#define  _CRT_SECURE_NO_WARNINGS 1
//��������Ϸ
//1����������һ�������
//2.������
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("*********************************\n");
	printf("******    1. play  0.exit  ******\n");
	printf("*********************************\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
//ʱ�������ǰ�������ʱ���ȥ���������ʼʱ�䣨1970.1.1.0:0:0��=��xxxx�룩
	//��ʱ�����������������������
	//time����  ����ֵ��time_t
    ret=rand()%100+1;//����1-100֮�������
	//printf("%d\n", ret);
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");

		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�����\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));//��������������һ�ξ�����
	int input = 0;

	do
	{
		menu();
		printf("��ѡ��:>");
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
			printf("ѡ�����\n");
			break;

		}
	} while (input);
	return 0;
}