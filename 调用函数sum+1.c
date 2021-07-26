#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void Add(int *p)
{
	(*p)++;
}
int main()
{
	int sum = 0;
	Add(&sum);
	printf("sum=%d\n", sum);
	Add(&sum);
	printf("sum=%d\n", sum);
	Add(&sum);
	printf("sum=%d\n", sum);
	Add(&sum);
	printf("sum=%d\n", sum);
	return 0;
}