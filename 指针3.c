#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//(*(void(*)()))();
//��0ǿ������ת����:void(*)()����ָ�����͡���0����һ�������ĵ�ַ������0��ַ���ĺ���
//void(*signal(int,void(*)(int)))(int);
//signal�����Ĳ�����2������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ���������int������������void
//signal�����ķ�������Ҳ��һ������ָ��:�ú���ָ��ָ��ĺ���������int������������void
//typedef void(*pfun_t)(int);
//��void��*��int����������
//����������pfun_t signal(int,pfun_t)
//int Add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int(*pa)(int,int) = Add;
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	printf("%d\n", (**pa)(2, 3));//�����ͬ��˵��*��ʵ������
//	printf("%d\n", (***pa)(2, 3));
//	return 0;
//}
//����ָ������
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int i = 0;
//	//ָ������
//	//int(*pa)(int,int)=Add;
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ
//	int (*pa[4])(int, int) = { Add,Sub,Mul,Div };
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", pa[i](2, 3));
//	}
//	return 0;
//}
//������
void menu()
{
	printf("*************************************\n");
	printf("*****    1.add       2.sub      *****\n");
	printf("*****    3.mul       4.div      *****\n");
	printf("*****          0.exit           *****\n");
	printf("*************************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do {
//		menu();
//		printf("��ѡ��:>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("����������������:>\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("����������������:>\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("����������������:>\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("����������������:>\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//
//		}
//
//	} while (input);
//	return 0;
//}
//����ָ���������;:ת�Ʊ�
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}
//���switch-case���������������
void calc(int(*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("����������������:>");
	scanf("%d%d", &x, &y);
	printf("%d\n", pf(x, y));
}//�ص�����
int main()
{
	int input = 0;
		do {
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			calc(Add);
			break;
		case 2:
			calc(Sub);
			break;
		case 3:
			calc(Mul);
			break;
		case 4:
			calc(Div);
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����\n");
			break;

		}

	} while (input);
	return 0;
}