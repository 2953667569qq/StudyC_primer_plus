#include<stdio.h>

int main()
{
	int a, b,sum=0;
	printf("请输入一个整数代表上限：");
	scanf_s("%d", &a);
	printf("请输入一个整数代表下限：");
	scanf_s("%d", &b);
	if (a > b)
	{
		for (; a >= b; --a)
		{
			sum += a * a;
		}
		printf("计算结果为：%d", sum);
	}
	

	return 0;
}