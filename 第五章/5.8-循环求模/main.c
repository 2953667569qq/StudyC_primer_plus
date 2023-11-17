#include<stdio.h>

int main()
{
	printf("请输入求模运算的第二个对象：");
	int a, b;
	scanf_s("%d", &a);
	printf("\n请输入求模运算的第一个对象（输入非整数退出）");
	scanf_s("%d", &b);
	while (b > 0)
	{
	
		printf("%d%%%d=%d\t\n", b,a,b%a);
		printf("再次求模运算的第一个对象（输入非整数退出）\n");
		scanf_s("%d", &b);

	}
	return 0;
}