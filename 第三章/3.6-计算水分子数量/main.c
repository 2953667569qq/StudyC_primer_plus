#include<stdio.h>

int main()
{
	double e=0;//夸脱数
	double x = 1 / 3.0e-23;//1克水的分子数
	printf("请输入夸脱数(1夸脱为950克)");
	scanf_s("%lf", &e);

	printf("水的质量为：%.1f克\t水分子个数约为%e",e*950,e*950*x);

	return 0;
}