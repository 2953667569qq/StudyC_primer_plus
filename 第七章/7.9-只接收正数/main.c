#include<stdio.h>
#include<math.h>
void in(int *a)
{
	while (scanf_s("%d", a) != 1||a<1)
	{
		printf("ÊäÈë´íÎó£¡\n");
		while (getchar() != '\n');
	}
	
}


int main()
{
	int a=0,c=0;
	in(&a);
	printf("%d\t", 1);
	if (a >= 2)
	{
		printf("2\t");
	}
	for (int i = 2; i <= a; ++i)
	{
		c = 0;
		for (int j = 2; j <= sqrt(i) + 1; j++)
		{
			
			if (i % j == 0)
			{
				++c;
				break;
			}
		}
		if (c == 0)
		{
			printf("%d\t", i);			
		}
		c = 0;
		
	}
	return 0;
}