#include<stdio.h>

int main()
{
	int a, b,sum=0;
	printf("������һ�������������ޣ�");
	scanf_s("%d", &a);
	printf("������һ�������������ޣ�");
	scanf_s("%d", &b);
	if (a > b)
	{
		for (; a >= b; --a)
		{
			sum += a * a;
		}
		printf("������Ϊ��%d", sum);
	}
	

	return 0;
}