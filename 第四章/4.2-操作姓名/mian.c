#include<stdio.h>
#include<string.h>
int main()
{
	char ming[30], xing[30];
	printf("请输入你的名和姓：");
	scanf("%s %s", ming, xing);
	printf("\"%s%s\"\n", ming, xing);
	int num = 20 - strlen(ming) - strlen(xing);
	printf("\"%*s%s%s\"\n", num, "", ming, xing);
	printf("\"%-s%-s%*s\"\n", ming, xing,num,"");
	int num2 = 3;
	printf("\"%s%s%*s\"", xing, ming, num2, "");

	return 0;
}