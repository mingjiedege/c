#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int check_sys()
{
	int a = 1;
	//char* p = (char*)&a;
	//return *p;
	return *(char*)&a;
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}