#include<stdio.h>

#define down 0.15
#define up 0.28

int mune(int* option)
{
	int garde;
	printf("*********************************\n");
	printf("*�����������������������       *\n");
	printf("*1.����            2.����       *\n");
	printf("*3.�ѻ飬����      4.�ѻ飬���� *\n");
	printf("*********************************\n");
	printf("�����������ִ����˳���\n");
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

		printf("��������Ĺ��ʣ�\n");
		scanf_s("%lf", &get);
		if (get <= garde)
		{
			money = get * down;
		}
		else
		{
			money = garde * down + (get - garde) * up;
		}	
		printf("��Ӧ�ý�˰%.4f\n", money);
	}

	return 0;
}