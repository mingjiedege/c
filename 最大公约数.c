#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//Õ·×ªÏà³ý·¨
int main()
{
	int i = 0;
	int j = 0;
	int mid = 0;
	scanf("%d %d", &i, &j);

	while (i % j)
	{
		mid = i % j;
		i=j;
		j = mid;

	}
	printf("%d ", j);
   
	return 0;
}