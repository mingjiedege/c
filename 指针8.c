#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//���ֵ
//	printf("%d\n", strlen(arr + 0));//���ֵ
//	//printf("%d\n", strlen(*arr));//strlen���յ��ǵ�ַ�����ﴫ����Ԫ�ء��������Ƿ������ڴ�
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//���ֵ
//	printf("%d\n", strlen(&arr + 1));//���ֵ������1��2��5��6
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ������1��2��5��1
//
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7 sizeof(arr)�����������Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(arr + 0));//4 arr+0����Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*arr));//1 arr����Ԫ�ص�ַ��*arr������Ԫ�أ���Ԫ�����ַ�����С��һ���ֽ�
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4 &arr��Ȼ������ĵ�ַ�������ǵ�ַ����ַ�Ĵ�С����4/8���ֽ�
//	printf("%d\n", sizeof(&arr + 1));//4 &arr+1���������������ĵ�ַ�������ǵ�ַ����ַ�Ĵ�С����4/8���ֽ�
//	printf("%d\n", sizeof(&arr[0] + 1));//4 �ڶ���Ԫ�ش�С
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
//	printf("%d\n", strlen(&arr));//6 &arr-����ĵ�ַ-����ָ�� char(*p)[7]=&arr
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4 ����ָ�����p�Ĵ�С
//	printf("%d\n", sizeof(p+1));//4 p+1 �õ������ַ�b�ĵ�ַ
//	printf("%d\n", sizeof(*p));//1 *p�����ַ����ĵ�һ���ַ�
//	printf("%d\n", sizeof(p[0]));//1 int arr[10]; arr[0]==*(arr+0) p[0]==*(p+0)������a��
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
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//	return 0;
//
//}
//��ά����
int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16 a[0]�൱�ڵ�һ����Ϊһά�������������sizeof(arr[0])����������������sizeof()�ڣ�������ǵ�һ�еĴ�С
	printf("%d\n", sizeof(a[0]+1));//4 a[0]�ǵ�һ�е�����������������ʱ����Ԫ�ص�ַ����ʵ���ǵ�һ�е�һ��Ԫ�صĵ�ַ������a[0]+1��ʾ��һ�еڶ���Ԫ�ص�ַ����ַ��С��4
	printf("%d\n", sizeof(*(a[0]+1)));//4 *(a[0]+1)�ǵ�һ�еڶ���Ԫ�أ���С��4���ֽ�
	printf("%d\n", sizeof(a+1));//4 a�Ƕ�ά�������������û��sizeof(������)��Ҳû��&(������)������a����Ԫ�ص�ַ
	//����ά�������Ԫ�������ĵ�һ�У��Ѷ�ά���鿴��һά���飩�����Ѷ�ά���鿴��һά����ʱ��a���ǣ���һ��/��Ԫ�أ���ַ��a+1���ǵڶ��е�ַ
	printf("%d\n", sizeof(*(a+1)));//16 sizeof(a[1]) ����ڶ��еĴ�С
	printf("%d\n", sizeof(&a[0]+1));//4 �ڶ��еĵ�ַ
	printf("%d\n", sizeof(*(&a[0]+1)));//16 ����ڶ��еĴ�С����λ���ֽ�
	printf("%d\n", sizeof(*a));//16 a����Ԫ�ص�ַ������һ�е�ַ��*a���ǵ�һ�У�sizeof(*a)���Ǽ����һ�д�С
	printf("%d\n", sizeof(a[3]));//16 sizeof()������ʣ����ڲ��ı��ʽ��ֻ��ͨ�������ڵ������������С
	return 0;
}