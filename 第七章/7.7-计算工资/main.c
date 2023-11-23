#include<stdio.h>
#define MONEY 1000.0

int main()
{
	 
	double income = 0, tax = 0, get = 0 ,time = 0;//收入，税，得到
	printf("请输入工作的时间（小时）：");
	scanf_s("%lf", &time);
	if (time <= 40)
	{
		income = MONEY * time;
	}
	else if (time > 40)
	{
		income = MONEY * 40+(time-40)*1.5*MONEY;
	}
	if (income <= 300)
	{
		tax = income * 0.15;
	}
	else if (income < 450)
	{
		tax = 300 * 0.15 + (income - 300) * 0.2;
	}
	else
	{
		tax = 300 * 0.15 + 150 * 0.2 + (income - 450) * 0.25;
	}
	get = income - tax;
	printf("工资总额为：%.4f\t税金为：%.4f\t净收入为：%.4f", income, tax, get);

	return 0;
}