#include<stdio.h>

int main()
{
	float a;
	printf("请输入一个数字：");
	scanf_s("%f", &a);
	printf("\n%f数字用小数点方式打印：%f\t 用指数计数法打印:%e", a, a, a);
	return 0;
}