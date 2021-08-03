#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int count_bit_different(int a, int b)
{
	int tmp = a ^ b;
	int count = 0;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}
int main()
{
	int a = 0;
	int b = 0;
	int count=0;
	scanf("%d%d", &a, &b);
	count = count_bit_different(a, b);
	printf("count=%d\n", count);
	return 0;
}