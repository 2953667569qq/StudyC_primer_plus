#include<stdio.h>
# define WEEKS 7
int main()
{
	int day, week, day2;
	printf("请输入天数：");
	scanf_s("%d", &day);
	week = day / WEEKS;
	day2 = day%WEEKS;
	printf("%d天为%d周%d天\n", day, week, day2);


	return 0;
}