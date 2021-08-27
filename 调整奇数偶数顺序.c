#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//调整奇数偶数顺序，使奇数全部位于偶数前面
// 1.从左边找一个偶数
// 2.从右边找一个奇数
//3.把他们交换
void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<right)
	{
		//从左边找偶数
		while ((left<right)&&(arr[left] % 2 == 1))
		{
			left++;
		}
		//从右边找奇数
		while ((left<right)&&(arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr, sz);
	return 0;

}