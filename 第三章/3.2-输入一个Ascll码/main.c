#include<stdio.h>

int main()
{

	short ch;
	printf("请输入一个Ascll码：");
	scanf_s("%hd", &ch);
	printf("\n%d对应的字符为%c\n", ch, ch);

	return 0;
}