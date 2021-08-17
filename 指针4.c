#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	////指针数组
//	//int* arr[10];
//	////数组指针
//	//int*(*pa)[10]=&arr;
//	////函数指针
//	int(*pAdd)(int, int) = Add;//&Add
//    //int sum=(*pAdd)(1, 2);
//	//int sum = pAdd(1, 2);
//	//printf("%d\n", sum);
//	//函数指针的数组
//	int(*pArr[5])(int, int);
//	//返回类型	int(*)(int,int)
//	//指向函数指针数组的指针
//	int(*(*ppArr)[5])(int,int)=&pArr;
//	//元素类型	int(*)(int,int)
//
//	return 0;
//}
void bubble_sort(int arr[10], int sz)
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序
		int j = 0;
		for (j = 0; j <sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
struct stu
{
	char  name[20];
	int age;
};
int main()
{
	int arr[10] = { 1,6,4,2,3,7,8,9,5,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	struct stu s[3] = { {"张三",20},{"李四",30},{"王五",10} };
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
	//bubble_sort(f, sz);
	bubble_sort(arr, sz);//不够通用
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}