#include<stdio.h>

int main()
{
	double begin = 1000000;
	int year = 0;
	while (begin > 0)
	{
		year++;
		begin -= 100000;
		begin *= 1.08;
		if (begin <= 0)
		{
			begin = 0;
		}
		printf("第%d年还剩%lf元\n", year, begin);
	}
	printf("第%d年取完。", year);
	return 0;
}