#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ġ�
//int main()
//{
//	int a[3][2] = {(0,1),(2,3),(4,5)};//(0,1)���ű����
//	int* p;
//	p = a[0];
//	printf("%d\n", p[0]);
//	return 0;
//}
//1
//�塢
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}
//0xfffffffc,-4
//��
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d %d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}
//10 5
//�ߡ�
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}
//at
//�ˡ�
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1 ,c};
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}
//POINT
//ER
//ST
//EW
