#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	//01�Ż�
	//i=a*b,a��b��������һ������<=����i��sqrt:��ƽ������ѧ�⺯��
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			printf("%d ", i);
			count++;
			}


	}
	printf("count=%d", count);
	return 0;
}