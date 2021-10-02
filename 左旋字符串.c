#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//暴力求解法
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//
//}
//三步翻转法

void reverse(char* left, char* right)
{
	assert(left && right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char* arr, int k)
{
	int len = strlen(arr);
	assert(arr);
	assert(k <= len);
	reverse(arr, arr + k - 1);
	reverse(arr + k , arr + len - 1);
	reverse(arr, arr + len - 1);
}
int main()
{
	char arr[] = "abcdef";
	left_move(arr, 2);
	printf("%s\n", arr);
	return 0;
}