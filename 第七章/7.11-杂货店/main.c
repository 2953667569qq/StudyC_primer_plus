#include<stdio.h>
#include<string.h>
#define ONE 2.05
#define TWO 1.15
#define THREE 1.09
//ѡ���Ʒ
void mune(char*option)
{
	printf("������ѡ��Ĳ�Ʒ��\n");
	printf("a.����  2.05/��\tb.��� 1.15/��\n");
	printf("c.���ܲ� 1.09/��\td.���� ");
	scanf_s("%c", option,1);
}
//ѡ������
void buy(double*one,double*two,double*three,char option)
{
	double weight = 0;
	char name[10] = " ";
	if (option == 'a')
	{
		strcpy(name, "����");
		printf("��������Ҫ����%s������", name);
		scanf_s("%lf", &weight);
		*one += weight;	
	}
	else if (option == 'b')
	{
		strcpy(name, "���");
		printf("��������Ҫ����%s������", name);
		scanf_s("%lf", &weight);
		*two += weight;
	}
	else if (option == 'c') 
	{
		strcpy(name, "���ܲ�");
		printf("��������Ҫ����%s������", name);
		scanf_s("%lf", &weight);
		*three += weight;
	}
	else if (option == 'd') { ; }
	else { printf("����\n"); }
	
}
//��ʾ���ﳵ
void showshoper(double one ,double two,double three)
{
	system("cls||clear");
	
	printf("*************************************\n");
	printf("* ����ǰ���������ǣ�              *\n");
	printf("* ����         ���        ���ܲ�   *\n");
	printf("* %-9.4f    %-9.4f   %-9.4f*\n", one, two, three);
	printf("*************************************\n");
}
//����
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
	printf("����Ҫ���%-10.4fԪ����ӭ�´ι��٣�\n", money);
}
int main()
{
	double one=0, two=0, three = 0;//sum,����Ǯ
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