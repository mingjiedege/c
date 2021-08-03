#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include<stdlib.h>
//一int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//二int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//三（优）
int count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}//n
//13
//1101 n
//1100 n-1
//n&n-1
//1100 n
//1011 n-1
//n&n-1
//1000 n
//0111 n-1
//0000 n
int main()
{
	int a = 0;
	scanf("%d", &a);//-1
	//10000000000000000000000000000001
	//11111111111111111111111111111110
	//11111111111111111111111111111111  >>
	//&00000000000000000000000000000001
	//写一个函数求a的二进制表示中有几个1
	int count=count_bit_one(a);
	printf("count=%d\n", count);
	//system("pause");//库函数-执行系统命令-pause（暂停）
	return 0;
}