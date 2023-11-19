#include<stdio.h>

double jisuan(double a, double b);
int main()
{
	double a, b;
	printf("请输入两个数字：\n");
	while (scanf_s("%lf%lf", &a, &b) != 2)
	{
		printf("输入无效，请重新输入！\n");
		while (getchar() != '\n');
	}
	double c = jisuan(a, b);
	printf("( % lf - % lf)//(%lf+%lf)=%lf\n",
		a, b, a, b, c);
	return 0;
}


double jisuan(double a, double b)
{

	return (a - b) / (a + b);
}