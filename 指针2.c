#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", *(p + i));
//		//printf("%d ", *(arr + i));
//		//printf("%d ", arr[i]);
//		printf("%d ", p[i]);
//	}
//	return 0;
//}
//һά���鴫��
//void test(int arr[])
//{}
////void test(int arr[10])
////{}
////void test(int* arr)
////{}
////void test2(int* arr2[20])
////{}
//void test2(int  **arr)
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int arr2[20] = { 0 };
//	test(arr);
//	test(arr2);
//	return 0;
//}
//��ά���鴫�Σ��п���ʡ�ԣ��в���ʡ�ԣ�
//void test(int arr[3][5])
//{}
//void test(int arr[][5])
//{}
//void test(int (*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}
//һ��ָ�봫��
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	return 0;
//}��һ�������Ĳ�������Ϊһ��ָ���ʱ�򣬺����ܽ���ʲô����
//void test1(int *p)
//{}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);
//	test1(p1);
//	return 0;
//}
//����ָ�봫��
//void test(int** ptr)
//{
//	printf("num=%d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}
//void test()
//{}
//int main()
//{
//	int* ptr;
//	int* arr[10];
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	test(arr);//ָ���������
//	return 0;
// 
//}
//����ָ��-��ָ������ָ��-��ź�����ַ��һ��ָ��
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//&�������ͺ��������Ǻ����ĵ�ַ
//	int(*p)(int,int) = Add;
//	printf("%d\n", (*p)(2, 3));
//
//	return 0;
//}
void print(char* str)
{
	printf("%s\n", str);
}
int main()
{
	void(*p)(char*) = print;
	(*p)("hello bit");
	return 0;
}