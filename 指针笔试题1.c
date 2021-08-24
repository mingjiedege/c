#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//一、
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d %d", *(a + 1), *(ptr - 1));
//	return 0;
//}
//写代码有三种境界
//1.写代码是代码
//2.看代码是内存
//3.看代码是代码
//程序的结果是什么 2 5
//二、
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p的值为0x100000，如下表达式的值分别为多少？
////已知结构体Test类型的变量大小是20个字节
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);//1048576+1=1048577 整数
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}
//0x100014
//0x100001
//0x100004
//三、
int main()
{
	int a[4] = { 1,2,3,4 };
	int* ptr1= (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x %x", ptr1[-1], *ptr2);
	return 0;
}
//0x4
//0x020000