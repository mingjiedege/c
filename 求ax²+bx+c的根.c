#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int main()
{
	double a = 0;
	double b = 0;
	double c = 0;
	int tmp = 0;
	scanf("%lf%lf%lf", &a, &b, &c);
	tmp = b*b - 4 * a * c;
	if (tmp < 0)
	{
		printf("本方程没有实数根！\n");
	}
	else if (tmp == 0)
	{
		printf("本方程有两个相等的实数根：%lf\n",- b / (2 * a));
	}
	else
	{
		printf("本方程有两个不同的实数根:x1=%lf x2=%lf", (-b + sqrt(tmp)) / (2 * a), (-b - sqrt(tmp)) / (2 * a));
	}
	return 0;
}