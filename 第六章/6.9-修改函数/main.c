#include<stdio.h>

double jisuan(double a, double b);
int main()
{
	double a, b;
	printf("�������������֣�\n");
	while (scanf_s("%lf%lf", &a, &b) != 2)
	{
		printf("������Ч�����������룡\n");
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