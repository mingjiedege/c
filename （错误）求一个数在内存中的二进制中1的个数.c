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
}//��numȡ-1ʱ�������˴���
//�˴���ֻ���������Ķ�������1�ĸ������������˸��������