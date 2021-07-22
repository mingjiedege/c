#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] = "bit";
	char arr2[20] = "###################";
	strcpy(arr2, arr1);
	printf("% s\n", arr2);//因为strcpy函数会把\0也拷贝过去，所以在见到\0（字符串结束标志）后，后面内容不再打印
	return 0;
}