#include<stdio.h>

#define down 0.15
#define up 0.28

int mune(int* option)
{
	int garde;
	printf("*********************************\n");
	printf("*请输入以下满足您的情况：       *\n");
	printf("*1.单身            2.户主       *\n");
	printf("*3.已婚，共有      4.已婚，离异 *\n");
	printf("*********************************\n");
	printf("输入其他数字代表退出！\n");
	scanf_s("%d", option);
	switch (*option)
	{
	case 1:
		garde = 17850;
		break;
	case 2:
		garde = 2390;
		break;
	case 3:
		garde = 29750;
		break;
	case 4:
		garde = 14875;
		break;
	default:
		break;
		
	}
	return garde;
}
int main()
{
	int option = 1;
	double money, get;
	
	while (option > 0 && option < 5)
	{
		int garde = mune(&option);

		printf("请输入你的工资：\n");
		scanf_s("%lf", &get);
		if (get <= garde)
		{
			money = get * down;
		}
		else
		{
			money = garde * down + (get - garde) * up;
		}	
		printf("您应该交税%.4f\n", money);
	}

	return 0;
}