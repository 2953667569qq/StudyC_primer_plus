#include<stdio.h>

void tempratures(double hua);
int main()
{
	double  hua;
	printf("�����뻪�϶ȣ�\n");
	while (scanf_s("%lf", &hua) == 1)
	{
		tempratures(hua);
	}

	return 0;
}

void tempratures(double hua)
{
	double she = (5.0 / 9.0) * (hua - 32.0);
	double kai = she + 273.16;
	printf("���϶�Ϊ��%.3f\t ���϶�Ϊ%.3f\n",she,kai );
}