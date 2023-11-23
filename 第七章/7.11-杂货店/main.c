#include<stdio.h>
#include<string.h>
#define ONE 2.05
#define TWO 1.15
#define THREE 1.09
//选择菜品
void mune(char*option)
{
	printf("请输入选择的菜品：\n");
	printf("a.洋芋  2.05/磅\tb.甜菜 1.15/磅\n");
	printf("c.胡萝卜 1.09/磅\td.结算 ");
	scanf_s("%c", option,1);
}
//选择重量
void buy(double*one,double*two,double*three,char option)
{
	double weight = 0;
	char name[10] = " ";
	if (option == 'a')
	{
		strcpy(name, "洋芋");
		printf("请输入需要购买%s的重量", name);
		scanf_s("%lf", &weight);
		*one += weight;	
	}
	else if (option == 'b')
	{
		strcpy(name, "甜菜");
		printf("请输入需要购买%s的重量", name);
		scanf_s("%lf", &weight);
		*two += weight;
	}
	else if (option == 'c') 
	{
		strcpy(name, "胡萝卜");
		printf("请输入需要购买%s的重量", name);
		scanf_s("%lf", &weight);
		*three += weight;
	}
	else if (option == 'd') { ; }
	else { printf("错误！\n"); }
	
}
//显示购物车
void showshoper(double one ,double two,double three)
{
	system("cls||clear");
	
	printf("*************************************\n");
	printf("* 您当前购买的情况是：              *\n");
	printf("* 洋芋         甜菜        胡萝卜   *\n");
	printf("* %-9.4f    %-9.4f   %-9.4f*\n", one, two, three);
	printf("*************************************\n");
}
//结算
void final(double one, double two, double three)
{
	double sum = 0,money=0;
	sum = one + two + three;
	money = one * ONE + two * TWO + three * THREE;
	if (money > 100)
	{
		money *= 0.95;
	}
	if (sum < 5 && sum > 0)
	{
		money += 6.5;
	}
	else if (sum > 5 && sum <= 20)
	{
		money += 14.0;
	}
	else if (sum > 20)
	{
		money += 14.0 + (sum - 20) * 0.5;
	}
	else if (sum == 0)
	{
		money = 0;
	}
	printf("您需要付款：%-10.4f元，欢迎下次光临！\n", money);
}
int main()
{
	double one=0, two=0, three = 0;//sum,计算钱
	char option=' ';
	while (option != 'd')
	{
		mune(&option);
		buy(&one, &two, &three,option);
		showshoper(one,two,three);
	}
	
	final(one, two, three);
	return 0;
}