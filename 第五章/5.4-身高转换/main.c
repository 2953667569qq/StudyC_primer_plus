#include<stdio.h>

int main()
{
	printf("请输入身高（cm）(输入非正数以关闭程序）：\n");
	float cm,inch;
	scanf_s("%f", &cm);
	inch = cm * 0.3937;
	while (cm >0)
	{
		printf("您的身高是：%.2fcm，或者%.2fin\n", cm, inch);
		printf("请输入身高（cm）(输入非正数以关闭程序）：\n");
		scanf_s("%f", &cm);
		inch = cm * 0.3937;
	}
	return 0;
}