#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
	//�ַ�ָ��
	//1
	//char ch = 'w';
	//char* pc = &ch;
	//*pc = 'w';
	//2
	/*char* pstr = "hello bit";  *pstr�����ǡ�h���ĵ�ַ��"hello bit"�ǳ����ַ��������ܱ��޸�
	printf("%s\n", pstr);*/

	//ָ������
	//int* arr[10]����ָ������
	//char* arr[4]һ���ַ�ָ������
	//char** arr[5]�����ַ�ָ������

	//int arr1[] = { 1,2,3,4,5 };
	//int arr2[] = { 2,3,4,5,6 };
	//int arr3[] = { 3,4,5,6,7 };
	//int* parr[] = { arr1,arr2,arr3 };
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 5; j++)
	//	{
	//		printf("%d ", *(parr[i] + j));
	//	}
	//	printf("\n");
	//}

	//����ָ��--�ܹ�ָ�������ָ��
	//int arr[10] = { 0 };
	//arr-��Ԫ�ص�ַ
	//&arr[0]--��Ԫ�ص�ַ
	//&arr--����ĵ�ַ

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int(*p)[10] = &arr;//����ĵ�ַ�������������p��������ָ��
	//int(*p)[10]//p�Ⱥ�*���˵��p��һ��ָ�������Ȼ��ָ�����һ����СΪ10�����ε����顣���ԣ�p��һ��ָ�룬ָ��һ�����飬������ָ��
		//[]�����ȼ�Ҫ����*�����Ա�����ϣ�������֤p�Ⱥ�*���

	//arr��&arr
	//int arr[10] = { 0 };
	//printf("arr=%p\n", arr);
	//printf("&arr=%p\n", &arr);
	//printf("arr+1=%p\n", arr+1);
	//printf("&arr+1=%p\n", &arr+1);
	////���
	//arr = 0097FD8C
	//& arr = 0097FD8C
	//arr + 1 = 0097FD90
	//& arr + 1 = 0097FDB4
	//&arr����������ĵ�ַ����&arr��&arr+1�Ĳ�ֵΪ40

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int* p = arr;
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", *(p + i));
	//}
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", (*pa)[i]);
//		//printf("%d ", arr[i]);
//		printf("%p ", *(*pa+i));
//
//
//	}
//return 0;
//}
	void print1(int arr[3][5], int x, int y)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < x; i++)
		{
			for (j = 0; j < y; j++)
			{
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
	}
	void print2(int (*p)[5], int x, int y)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < x; i++)
		{
			for (j = 0; j < y; j++)
			{
				printf("%d ", *(*(p+i)+j));
		//		printf("%d ", (*(p + i))[j]);
		//		printf("%d ", p[i][j]);
		//		printf("%d ", *(p[i] + j));
			}
			printf("\n");
		}
	}
	int main()
	{
		int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
		print1(arr, 3, 5);
		print2(arr, 3, 5);
		return 0;
	}

