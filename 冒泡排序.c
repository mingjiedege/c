#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void  bubble_sort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	int flag = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//用flag对函数进行优化，如果函数还未有序，则flag=0;反之，flag为初始值1。
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 1,5,8,9,6,3,4,2,7 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{

		printf("%d ", arr[i]);
	}
	return 0;

}