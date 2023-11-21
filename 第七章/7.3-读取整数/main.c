#include<stdio.h>

int main()
{
	int on = 0, jn = 0;
	int s;
	double oushu = 0, jishu = 0;
	printf("请输入数字（0）代表结束：");
	scanf_s("%d", &s);
	while (s != 0)
	{
		
		if (s%2==0)
		{
			++on;
			oushu += (double)s;
		}
		else
		{
			++jn;
			jishu += (double)s;
		}
		scanf_s("%d", &s);
	} 
	printf("偶数的个数=%d\t偶数平均值=%.3f\n", on, oushu/on);
	printf("奇数的个数=%d\t奇数的平均值=%.3f\n", jn, jishu/jn);

	return 0;
}