#include<stdio.h>

int main()
{
	printf("请输入一个整数：");
	int n,m=0;

	scanf_s("%d", &n);
	printf("输出%d到%d：\n", n, n + 10);
	while (m <=10)
	{
		printf("%d\t",m+n);
		m++;
	}


	return 0;
}