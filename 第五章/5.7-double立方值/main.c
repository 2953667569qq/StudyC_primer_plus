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
	printf("请输入一个数：");
	scanf_s("%lf", &value);
	num = cube(value);
	printf("%.3f的立方是%.3f\n",value,num);

	return 0;
}