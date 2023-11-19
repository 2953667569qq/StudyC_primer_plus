#include<stdio.h>

int main()
{
	int num[8];
	printf("请输入8个数字\n");
	for (int i = 0; i < 8; i++)
	{
		scanf_s("%d", &num[i]);
	}
	printf("现在倒序打印这8个数字\n");
	for (int i = 7; i >= 0; i--)
	{
		printf("%d ", num[i]);
	}
	return 0;
}