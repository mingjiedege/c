#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����ˮ����
// ����ˮ��1ƿ��ˮһԪ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣�
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money);
	//���������ˮ�ȵ�
	//total = money;
	//empty = money;
	////����������ˮ
	//while (empty >= 2)
	//{
	//	total += empty / 2;
	//	empty=empty / 2 + empty % 2;
	//}
	//printf("total=%d\n", total);
	if (money == 0)
		total = 0;
	else
		total = 2 * money - 1;
	printf("total=%d\n", total);
	return 0;
}