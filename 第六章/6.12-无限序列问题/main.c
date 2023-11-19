#include<stdio.h>

int main()
{
	printf("请输入结束的项数");
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
	printf("one的第%d项和为：%lf", num, one);
	printf(" two的第%d项和为：%lf", num, two);
	return 0;
}