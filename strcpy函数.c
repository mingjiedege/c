#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] = "bit";
	char arr2[20] = "###################";
	strcpy(arr2, arr1);
	printf("% s\n", arr2);//��Ϊstrcpy�������\0Ҳ������ȥ�������ڼ���\0���ַ���������־���󣬺������ݲ��ٴ�ӡ
	return 0;
}