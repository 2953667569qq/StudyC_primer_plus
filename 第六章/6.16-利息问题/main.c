#include<stdio.h>


int main()
{
	double a = 100, b = 100;
	int year = 0;
	do
	{
		a += 100 * 0.1;
		b *= 1.05;
		++year;
	} while (b < a);
	printf("��%d��ʱ��b�������������a����ʱa=%lf\tb=%lf", year, a, b);

	return 0;
}