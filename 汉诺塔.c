#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void move(int n, char a, char c)
{
	printf("move %d: from %c to %c\n", n, a, c);
}
void Hanoi(int n, char a, char c, char b)
{
	if (n == 1)
	{
		move(n, a, c);
	}
	else
	{
		Hanoi(n - 1, a, b, c);
		move(n, a, c);
		Hanoi(n - 1, b,c, a);
	}
}
int main()
{
	int n = 0;
	printf("������Բ�̵Ĳ���:>\n");
	scanf("%d", &n);
	printf("��Բ�̴�'A'ͨ��'B'�Ƶ�'C'�Ĺ���:\n");
	Hanoi(n, 'A', 'C', 'B');
	return 0;	
}