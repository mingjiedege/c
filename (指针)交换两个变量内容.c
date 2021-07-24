#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void swap(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa= *pb ;
	*pb = tmp;
}
int main()
{
	int a = 50;
	int b = 20;
	//*pa;//解引用操作
	printf("a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}