#include<stdio.h>

int main()
{
	int num[8];
	printf("������8������\n");
	for (int i = 0; i < 8; i++)
	{
		scanf_s("%d", &num[i]);
	}
	printf("���ڵ����ӡ��8������\n");
	for (int i = 7; i >= 0; i--)
	{
		printf("%d ", num[i]);
	}
	return 0;
}