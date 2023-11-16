#include<stdio.h>

int main()
{

	char ming[20], xing[20];

	printf("请输入你的名和姓：");
	scanf("%s", ming);
	
	scanf("%s", xing);
	printf("\n你的姓名是：%s%s", xing,ming);
}