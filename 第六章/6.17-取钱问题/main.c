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
		printf("��%d�껹ʣ%lfԪ\n", year, begin);
	}
	printf("��%d��ȡ�ꡣ", year);
	return 0;
}