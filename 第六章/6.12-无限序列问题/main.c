#include<stdio.h>

int main()
{
	printf("���������������");
	int num = 0;
	double one = 0, two = 0;
	scanf_s("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		one += 1.0 / (double)i;
		int c = 1;
		for(int j = 1; j < i; j++)
		{
			c *= -1;
		}
		two += (c / (double)i);
	}
	printf("one�ĵ�%d���Ϊ��%lf", num, one);
	printf(" two�ĵ�%d���Ϊ��%lf", num, two);
	return 0;
}