#include<stdio.h>

int main()
{
	printf("��������ģ����ĵڶ�������");
	int a, b;
	scanf_s("%d", &a);
	printf("\n��������ģ����ĵ�һ����������������˳���");
	scanf_s("%d", &b);
	while (b > 0)
	{
	
		printf("%d%%%d=%d\t\n", b,a,b%a);
		printf("�ٴ���ģ����ĵ�һ����������������˳���\n");
		scanf_s("%d", &b);

	}
	return 0;
}