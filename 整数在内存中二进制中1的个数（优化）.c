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
}//��һ������ȥ1������ԭ���������������㣬���ܰ����ұߵ�1���0��������һ�������Ķ��������ж��ٸ�1����ִ�ж��ٴ�
