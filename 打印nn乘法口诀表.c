#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print_table(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <=i; j++)
		{
			printf("%d*%d=%-3d ", i, j, i* j);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print_table(n);
	return 0;
}