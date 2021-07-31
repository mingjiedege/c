#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 5;
	int b = 3;
	a = a + b;
	b = a - b;
	a = a - b;
	return 0;
}//如果a和b的值特别大，可能会溢出，导致二进制位丢失