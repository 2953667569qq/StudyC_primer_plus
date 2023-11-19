#include<stdio.h>

int main()
{
	double a[8], b[8];
	printf("请输入八个浮点数：\n");
	for (int i = 0; i < 8; i++)
	{
		scanf_s("%lf", &a[i]);
	}
	b[0] = a[0];
	for (int j = 1; j < 8; j++)
	{
		b[j] = b[j - 1] + a[j];

	}
	for (int j = 0; j < 8; j++)
	{
		printf("%-10.6f ", a[j]);
	}
	printf("\n");
	for (int j = 0; j < 8; j++)
	{
		printf("%-10.6f ", b[j]);
	}
	return 0;
}