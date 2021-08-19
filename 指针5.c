#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
//qsort-库函数-排序
//quick sort-快速排序
struct stu
{
	char  name[20];
	int age;
};
int cmp_int(const void* e1,const void* e2)
{
	//比较两个整型值
	return *(int*)e1 - *(int*)e2;

}
int cmp_float(const void* e1, const void* e2)
{
	//if (*(float*)e1 == *(float*)e2)
	//	return 0;
	//else if (*(float*)e1 > *(float*)e2)
	//	return 1;
	//else
	//	return -1;
	return(int)(*(float*)e1 - *(float*)e2);
}
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age-((struct stu*)e2)->age;
}
int cmp_stu_by_name(const void* e1, const void* e2)
{
	//比较比较名字就是两个字符串
	//字符串比较不能直接用><==来比较，应该用strcmp函数
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void test2()
{
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%f ", f[j]);
	}
}
void test3()
{
	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10}};
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);


}
int main()
{
	//test1();
	//test2();
	test3();
	return 0;

}
//int main()
//{
//	int a = 10;
//	//int* pa = &a;
//	//char* pc = &a;
//	//char ch = 'w';
//	void* p = &a;//void*类型的指针 可以接受任意类型的地址
//	//*p = 0;//非法的间接取址
//	//void* 类型的指针不能进行解引用操作
//	// void* 类型的指针 不能进行+-整数的操作	
//	//p = &ch;
//	return 0;
//}