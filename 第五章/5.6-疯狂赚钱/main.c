#include<stdio.h>

int main()
{
	int num, n = 1;
	printf("�������һ��׬��Ǯ��");
	scanf_s("%d", &num);
	printf("%d����%dԪǮ\n", n, num);
	while (n++ < 20)
	{
		num+=n*n;
		printf("%d����%dԪǮ\n", n, num);
	}


	return 0;
}