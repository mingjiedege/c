#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int Fac(n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac(n - 1);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fac(n);
	printf("ret=%d\n", ret);
	return 0;
}