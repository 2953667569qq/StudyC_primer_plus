#include<stdio.h>
# define WEEKS 7
int main()
{
	int day, week, day2;
	printf("������������");
	scanf_s("%d", &day);
	week = day / WEEKS;
	day2 = day%WEEKS;
	printf("%d��Ϊ%d��%d��\n", day, week, day2);


	return 0;
}