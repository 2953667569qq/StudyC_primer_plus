#include<stdio.h>

int main()
{
	int num[8]={1,1,1,1,1,1,1,1}, a;
	printf("请输入0-8的八个数字");
	for (int i = 0; i < 8; i++)
	{ 
		scanf_s("%d", &a);
		for (int j = 0; j < a; j++)
		{
			num[i] *= 2;
		}	
	}
	int m=0;
	do
	{
	printf("%d\n", num[m]);
	m++;
	} while (m <= 7);
	
	return 0;
}