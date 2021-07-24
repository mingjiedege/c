#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int max = get_max(a, b);
	printf("max=%d\n", max);
	return 0;
}
