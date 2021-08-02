#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int count=0;
	for (i = 100; i <= 200; i++)
	{
		//素数判断规则
		//试除法
		//产生2--i-1的数字
		for (j = 2; j <i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		     
		}
		if (j == i)
		{
			printf("%d ", i);
			count++;
		}
		
	}
	printf("count=%d", count);
	return 0;
}