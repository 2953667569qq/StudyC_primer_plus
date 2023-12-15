#include<stdio.h>
#include<stdlib.h>

//菜单显示
void menu();
// 加法 
void add();
// 减法 
void minus();
// 乘法 
void multiply();
// 除法
void divide();
int main()
{
	menu();
	char option=' ';
	while (1)
	{
		printf("请输入选项！\n");
		option = getchar();
		while (option != 'a' && option != 'b' && option != 'c' && option != 'd' && option != 'q')
		{
			option = getchar();
		}
		switch (option)
		{
		case 'a':
			add();

			break;
		case 'b':
			minus();
			break;
		case 'c':
			multiply();
			break;
		case 'd':
			divide();
			break;
		case 'q':
			exit(1);
			break;
		default:
			break;
		}
	}
	
	return 0;
}
//菜单显示

void menu()
{
	printf("请输入功能！\n");
	printf("*************************\n");
	printf(" a.加           b.减\n");
	printf(" c.乘           d.除\n");
	printf(" q.退出\n");
	printf("*************************\n");
}


// 加法 
void add()
{
	double a, b;
	printf("请输入两个数字!\n");
	scanf_s("%lf %lf", &a, &b);
	printf("%.3f+%.3f=%.3f\n", a, b, a + b);
}
// 减法 
void minus()
{
	double a, b;
	printf("请输入两个数字!\n");
	scanf_s("%lf %lf", &a, &b);
	printf("%.3f-%.3f=%.3f\n", a, b, a - b);
}
// 乘法 
void multiply()
{
	double a, b;
	printf("请输入两个数字!\n");
	scanf_s("%lf %lf", &a, &b);
	printf("%.3f*%.3f=%.3f\n", a, b, a * b);
}
// 除法
void divide()
{
	double a, b=0;
	while (b == 0)
	{
		printf("请输入两个数字!\n");
		scanf_s("%lf %lf", &a, &b);
	}
	printf("%.3f/%.3f=%.3f\n", a, b, a / b);
}