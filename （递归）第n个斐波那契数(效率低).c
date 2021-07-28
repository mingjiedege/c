#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>

int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 2) + Fib(n - 1);//会有多次重复计算，效率低,可以用迭代来提高效率
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret=%d\n", ret);
	return 0;
}