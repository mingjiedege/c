#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//(*(void(*)()))();
//把0强制类型转换成:void(*)()函数指针类型——0就是一个函数的地址，调用0地址处的函数
//void(*signal(int,void(*)(int)))(int);
//signal函数的参数有2个，第一个是int，第二个是函数指针，该函数指针指向的函数参数是int，返回类型是void
//signal函数的返回类型也是一个函数指针:该函数指针指向的函数参数是int，返回类型是void
//typedef void(*pfun_t)(int);
//把void（*）int进行重命名
//————》pfun_t signal(int,pfun_t)
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
//	printf("%d\n", (**pa)(2, 3));//结果相同，说明*无实际意义
//	printf("%d\n", (***pa)(2, 3));
//	return 0;
//}
//函数指针数组
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
//	//指针数组
//	//int(*pa)(int,int)=Add;
//	//需要一个数组，这个数组可以存放4个函数的地址
//	int (*pa[4])(int, int) = { Add,Sub,Mul,Div };
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", pa[i](2, 3));
//	}
//	return 0;
//}
//计算器
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
//		printf("请选择:>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:>\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数:>\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数:>\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数:>\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//
//		}
//
//	} while (input);
//	return 0;
//}
//函数指针数组的用途:转移表
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}
//解决switch-case语句代码冗余的问题
void calc(int(*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请输入俩个操作数:>");
	scanf("%d%d", &x, &y);
	printf("%d\n", pf(x, y));
}//回调函数
int main()
{
	int input = 0;
		do {
		menu();
		printf("请选择:>\n");
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
			printf("退出\n");
			break;
		default:
			printf("选择错误\n");
			break;

		}

	} while (input);
	return 0;
}