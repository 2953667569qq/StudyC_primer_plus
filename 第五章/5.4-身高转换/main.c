#include<stdio.h>

int main()
{
	printf("��������ߣ�cm��(����������Թرճ��򣩣�\n");
	float cm,inch;
	scanf_s("%f", &cm);
	inch = cm * 0.3937;
	while (cm >0)
	{
		printf("��������ǣ�%.2fcm������%.2fin\n", cm, inch);
		printf("��������ߣ�cm��(����������Թرճ��򣩣�\n");
		scanf_s("%f", &cm);
		inch = cm * 0.3937;
	}
	return 0;
}