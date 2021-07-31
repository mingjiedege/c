#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);
	while (num)
	{
		count++;
		num = num & num - 1;
	}
	printf("%d\n", count);
	return 0;
}//把一个数减去1，再与原来的数进行与运算，将能把最右边的1变成0。这样，一个整数的二进制中有多少个1，就执行多少次
