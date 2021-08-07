#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{   //为避免空指针传入，导致程序崩溃
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}这样做虽然规避了程序崩溃，但传入空指针的问题反而不利于发现
//所以需要找一种更优的方法
//void my_strcpy(char* dest, char* src)
//{   
//	assert(dest != NULL);//断言
//	assert(src != NULL);//这里使用assert,当判断条件为真时，程序正常运行，为假时程序报错，这样做可以便于发现问题，即时修改
//	while (*dest++ = *src++)//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
//	{                       //但是当src和dest的位置不小心写错时，会形成野指针，为了增强程序的健壮性，我们可以使用const
//		;                   //src作为原字符串不能被覆盖，这里使用const可以有效的保护源头数据
//	}
//}为了再次增强代码的健壮性，使my_strcpy可以做其他函数的参数，我们可以重新定义函数的返回类型
char* my_strcpy(char* dest, char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++)
	{                   
		;                  
	}
	return ret;
}
int main()
{
	char arr1[] = "############################";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", my_strcpy(arr1,arr2));//链式访问，my_strcpy做了printf的参数
	return 0;
}