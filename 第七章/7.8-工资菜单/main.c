#include<stdio.h>

#define ONE 8.75
#define TWO 9.33
#define THREE 10.00
#define FOUR 11.20
int menu(int option )
{
	
	while (option < 1 || option>5)
	{
		printf("*****************************************\n");
		printf("�����빤�ʵȼ�:\n");
		printf("  1.$8.75/hr                $9.33/hr\n");
		printf("  3.$10.00/hr               $11.20/hr\n");
		printf("5.quit\n");
		printf("*****************************************\n");
		scanf_s("%d", &option);
	}
	return option;
}

int main()
{
	int option = 0;
	double income = 0, tax = 0, get = 0, time = 0, MONEY;//���룬˰���õ�

	option=menu(option);
	switch (option)
	{
	case 1:
		MONEY = ONE;
		break;
		case 2:
		MONEY = TWO;
		break;
		case 3:
			MONEY = THREE;
			break;
		case 4:
			MONEY = FOUR;
			break;
		case 5:
			exit(1);
			break;
	}
	printf("�����빤��ʱ�䣺");
	printf("�����빤����ʱ�䣨Сʱ����\n");
	scanf_s("%lf", &time);
	if (time <= 40)
	{
		income = MONEY * time;
	}
	else if (time > 40)
	{
		income = MONEY * 40 + (time - 40) * 1.5 * MONEY;
	}
	if (income <= 300)
	{
		tax = income * 0.15;
	}
	else if (income < 450)
	{
		tax = 300 * 0.15 + (income - 300) * 0.2;
	}
	else
	{
		tax = 300 * 0.15 + 150 * 0.2 + (income - 450) * 0.25;
	}
	get = income - tax;
	printf("�����ܶ�Ϊ��%.4f\t˰��Ϊ��%.4f\t������Ϊ��%.4f", income, tax, get);


	return 0;
}