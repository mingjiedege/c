#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//һ��
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d %d", *(a + 1), *(ptr - 1));
//	return 0;
//}
//д���������־���
//1.д�����Ǵ���
//2.���������ڴ�
//3.�������Ǵ���
//����Ľ����ʲô 2 5
//����
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p��ֵΪ0x100000�����±��ʽ��ֵ�ֱ�Ϊ���٣�
////��֪�ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);//1048576+1=1048577 ����
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}
//0x100014
//0x100001
//0x100004
//����
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