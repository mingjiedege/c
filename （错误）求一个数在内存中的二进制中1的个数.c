#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);
	while (num)
	{
		if (num% 2 == 1)
			count++;
		num = num / 2;
	}
	printf("%d\n", count);
	return 0;
}//当num取-1时，出现了错误
//此代码只能求正数的二进制中1的个数，而忽略了负数的情况