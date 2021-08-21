#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//————————————————
//一、
//int main()
//{
//	//数组名是首元素地址
//	// 1.sizeof（数组名）-数组名表示整个数组
//	// 2.&数组名-表示整个数组
//	//一维数组
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16  sizeod(数组名)-计算的是数组总大小-单位是字节
//	printf("%d\n", sizeof(a+0));//4 -数组名这里表示首元素地址，a+0还是首元素地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(*a));//4 -数组名表示首元素地址，*a就是首元素，sizeof（*a）就是4
//	printf("%d\n", sizeof(a+1));//4 -数组名表示首元素地址，a+1是第二个元素的地址
//	printf("%d\n", sizeof(a[1]));//4 -第二个元素大小
//	printf("%d\n", sizeof(&a));//4 -&a取出的是数组的地址，但是数组的地址也是地址，地址的大小就是4个字节
//	printf("%d\n", sizeof(*&a));//16 -&a是数组的地址，数组的地址解引用访问的是数组，sizeof计算的就是数组的大小，单位是字节
//	printf("%d\n", sizeof(&a+1));//4 -&a是数组的地址，&a+1虽然地址跳过整个数组，但还是地址，所以是4个字节
//	printf("%d\n", sizeof(&a[0]));//4 &a[0]是第一个元素的地址
//	printf("%d\n", sizeof(&a[0]+1));//4 -&a[0]+1 是第二个元素的地址
//
//	return 0;
//}
//——————————————————
//二、
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//6
	printf("%d\n", sizeof(arr+0));//4
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(&arr+1));//4
	printf("%d\n", sizeof(&arr[0]+1));//4

	return 0;
}