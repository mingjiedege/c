#define  _CRT_SECURE_NO_WARNINGS 1
//猜数字游戏
//1。电脑生成一个随机数
//2.猜数字
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
//时间戳：当前计算机的时间减去计算机的起始时间（1970.1.1.0:0:0）=（xxxx秒）
	//拿时间戳来设置随机数的生成起点
	//time函数  返回值是time_t
    ret=rand()%100+1;//生成1-100之间随机数
	//printf("%d\n", ret);
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");

		}
		else
		{
			printf("恭喜你，猜对了！！！\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));//放在主函数设置一次就行了
	int input = 0;

	do
	{
		menu();
		printf("请选择:>");
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
			printf("选择错误\n");
			break;

		}
	} while (input);
	return 0;
}