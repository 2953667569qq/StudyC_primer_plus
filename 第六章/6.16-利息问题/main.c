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
	printf("当%d年时，b方案的利益大于a，此时a=%lf\tb=%lf", year, a, b);

	return 0;
}