#include<stdio.h>

double cube(double value)
{
	double num;
	num = value * value * value;
	return num;
}

int main()
{
	double value,num;
	printf("������һ������");
	scanf_s("%lf", &value);
	num = cube(value);
	printf("%.3f��������%.3f\n",value,num);

	return 0;
}