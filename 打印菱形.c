#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void lingxing(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= (n + 1) / 2; i++)
	{
		for (j =1; j <= (n + 1) / 2 - i; j++)
		{
			printf("  ");
		}
		for (j = 1; j < 2 * i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (i = 1; i <= n / 2; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("  ");
		}
		for (j = 1; j <=n-2*i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	printf("������һ������\n");
	while (!(n % 2))
	{
		scanf("%d", &n);
		if (n % 2 != 1)
		{
			printf("�����������������!\n");
		}
	}
	lingxing(n);
	return 0;
}
