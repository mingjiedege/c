#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print(int i, int j)
{
	for (i = 1; i <= 4; i++)
	{
		for (j = 0; j < 2 * (i - 1); j += 2)
		{
			printf("  ");
		}
		for (j = 1; j <= 5; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}


int main()
{
	int i = 0;
	int j = 0;
	print(i,j);
	return 0;
}