#include<stdio.h>

int main()
{
	int num, n = 1;
	printf("请输入第一天赚的钱：");
	scanf_s("%d", &num);
	printf("%d天有%d元钱\n", n, num);
	while (n++ < 20)
	{
		num+=n*n;
		printf("%d天有%d元钱\n", n, num);
	}


	return 0;
}