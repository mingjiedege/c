#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("���Խ���һ�����ڹػ����������:��������ȡ���ػ���\n������:>");
	scanf("%s", input);
	if (0 == strcmp(input, "������"))
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}