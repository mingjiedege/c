#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
	//字符指针
	//1
	//char ch = 'w';
	//char* pc = &ch;
	//*pc = 'w';
	//2
	/*char* pstr = "hello bit";  *pstr里存的是‘h’的地址，"hello bit"是常量字符串，不能被修改
	printf("%s\n", pstr);*/

	//指针数组
	//int* arr[10]整形指针数组
	//char* arr[4]一级字符指针数组
	//char** arr[5]二级字符指针数组

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

	//数组指针--能够指向数组的指针
	//int arr[10] = { 0 };
	//arr-首元素地址
	//&arr[0]--首元素地址
	//&arr--数组的地址

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int(*p)[10] = &arr;//数组的地址存起来，上面的p就是数组指针
	//int(*p)[10]//p先和*结合说明p是一个指针变量，然后指向的是一个大小为10个整形的数组。所以，p是一个指针，指向一个数组，叫数组指针
		//[]的优先级要高于*，所以必须加上（）来保证p先和*结合

	//arr和&arr
	//int arr[10] = { 0 };
	//printf("arr=%p\n", arr);
	//printf("&arr=%p\n", &arr);
	//printf("arr+1=%p\n", arr+1);
	//printf("&arr+1=%p\n", &arr+1);
	////结果
	//arr = 0097FD8C
	//& arr = 0097FD8C
	//arr + 1 = 0097FD90
	//& arr + 1 = 0097FDB4
	//&arr是整个数组的地址所以&arr和&arr+1的差值为40

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

