#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include<stdlib.h>
//һint count_bit_one(unsigned int n)
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
//��int count_bit_one(int n)
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
//�����ţ�
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
	//дһ��������a�Ķ����Ʊ�ʾ���м���1
	int count=count_bit_one(a);
	printf("count=%d\n", count);
	//system("pause");//�⺯��-ִ��ϵͳ����-pause����ͣ��
	return 0;
}