#include<stdio.h>

int main()
{
	double a, b;
	printf("�������������֣�\n");
	while (scanf_s("%lf%lf", &a, &b) != 2)
	{
		printf("������Ч�����������룡\n");
		while (getchar() != '\n');
	}
	printf("( % lf - % lf)//(%lf+%lf)=%lf\n",
		a, b, a, b, (a - b) / (a + b));
	return 0;
}