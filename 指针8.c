#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//随机值
//	printf("%d\n", strlen(arr + 0));//随机值
//	//printf("%d\n", strlen(*arr));//strlen接收的是地址，这里传入首元素————非法访问内存
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr + 1));//随机值——比1、2、5少6
//	printf("%d\n", strlen(&arr[0] + 1));//随机值——比1、2、5少1
//
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7 sizeof(arr)计算的是数组的大小，单位是字节
//	printf("%d\n", sizeof(arr + 0));//4 arr+0是首元素的地址
//	printf("%d\n", sizeof(*arr));//1 arr是首元素地址，*arr就是首元素，首元素是字符，大小是一个字节
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4 &arr虽然是数组的地址，但还是地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(&arr + 1));//4 &arr+1是跳过整个数组后的地址，但还是地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(&arr[0] + 1));//4 第二个元素大小
//
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6 &arr-数组的地址-数组指针 char(*p)[7]=&arr
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4 计算指针变量p的大小
//	printf("%d\n", sizeof(p+1));//4 p+1 得到的是字符b的地址
//	printf("%d\n", sizeof(*p));//1 *p就是字符串的第一个字符
//	printf("%d\n", sizeof(p[0]));//1 int arr[10]; arr[0]==*(arr+0) p[0]==*(p+0)——‘a’
//	printf("%d\n", sizeof(&p));//4  
//	printf("%d\n", sizeof(&p+1));//4
//	printf("%d\n", sizeof(&p[0]+1));//4
//
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//err
//	printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p + 1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//	return 0;
//
//}
//二维数组
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16 a[0]相当于第一行作为一维数组的数组名，sizeof(arr[0])把数组名单独放在sizeof()内，计算的是第一行的大小
	printf("%d\n", sizeof(a[0]+1));//4 a[0]是第一行的数组名，数组名此时是首元素地址，其实就是第一行第一个元素的地址。所以a[0]+1表示第一行第二个元素地址，地址大小是4
	printf("%d\n", sizeof(*(a[0]+1)));//4 *(a[0]+1)是第一行第二个元素，大小是4个字节
	printf("%d\n", sizeof(a+1));//4 a是二维数组的数组名，没有sizeof(数组名)，也没有&(数组名)，所以a是首元素地址
	//而二维数组的首元素是他的第一行（把二维数组看成一维数组），而把二维数组看成一维数组时，a就是（第一行/首元素）地址，a+1就是第二行地址
	printf("%d\n", sizeof(*(a+1)));//16 sizeof(a[1]) 计算第二行的大小
	printf("%d\n", sizeof(&a[0]+1));//4 第二行的地址
	printf("%d\n", sizeof(*(&a[0]+1)));//16 计算第二行的大小，单位是字节
	printf("%d\n", sizeof(*a));//16 a是首元素地址——第一行地址，*a就是第一行，sizeof(*a)就是计算第一行大小
	printf("%d\n", sizeof(a[3]));//16 sizeof()不会访问（）内部的表达式，只会通过（）内的类型来计算大小
	return 0;
}