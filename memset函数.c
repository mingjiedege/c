#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);//传参传的是*的ASCII码值，可以是字符
	printf("%s\n", arr);
	return 0;
}