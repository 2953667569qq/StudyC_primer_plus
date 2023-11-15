#include<stdio.h>

int main()
{
	double cm=0, in=0; //in是英寸，cm是厘米
	printf("请输入身高:(英寸)");
	scanf_s("%lf",&in);
	cm = in * 2.54;
	printf("\n您的身高是：%.2lfcm\n", cm);

	return 0;
}