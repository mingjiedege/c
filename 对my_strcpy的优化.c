#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{   //Ϊ�����ָ�봫�룬���³������
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}��������Ȼ����˳���������������ָ������ⷴ�������ڷ���
//������Ҫ��һ�ָ��ŵķ���
//void my_strcpy(char* dest, char* src)
//{   
//	assert(dest != NULL);//����
//	assert(src != NULL);//����ʹ��assert,���ж�����Ϊ��ʱ�������������У�Ϊ��ʱ���򱨴����������Ա��ڷ������⣬��ʱ�޸�
//	while (*dest++ = *src++)//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
//	{                       //���ǵ�src��dest��λ�ò�С��д��ʱ�����γ�Ұָ�룬Ϊ����ǿ����Ľ�׳�ԣ����ǿ���ʹ��const
//		;                   //src��Ϊԭ�ַ������ܱ����ǣ�����ʹ��const������Ч�ı���Դͷ����
//	}
//}Ϊ���ٴ���ǿ����Ľ�׳�ԣ�ʹmy_strcpy���������������Ĳ��������ǿ������¶��庯���ķ�������
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
	printf("%s\n", my_strcpy(arr1,arr2));//��ʽ���ʣ�my_strcpy����printf�Ĳ���
	return 0;
}