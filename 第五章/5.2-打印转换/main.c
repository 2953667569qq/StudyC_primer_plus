#include<stdio.h>

int main()
{
	printf("������һ��������");
	int n,m=0;

	scanf_s("%d", &n);
	printf("���%d��%d��\n", n, n + 10);
	while (m <=10)
	{
		printf("%d\t",m+n);
		m++;
	}


	return 0;
}