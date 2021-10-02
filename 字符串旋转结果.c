#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
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
	reverse(arr + k, arr + len - 1);
	reverse(arr, arr + len - 1);
}
//穷举
//int is_left_move(char* s1, char* s2)
//{
//	assert(s1 && s2);
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//优化
int is_left_move(char* str1, char* str2)
{
	//1.在str1字符串中追加一个str1字符串
	//2.判断str2指向的字符串是否是str1子符串的子串
	//1
	int len1 = strlen(str1);
	strncat(str1, str1, len1);
	int len2 = strlen(str2);
	if (len1 != len2)
	{
		return 0;
	}
    //2
	char* ret=strstr(str1, str2);
	if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}