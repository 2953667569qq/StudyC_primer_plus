#include<stdio.h>
#include<stdlib.h>

//�˵���ʾ
void menu();
// �ӷ� 
void add();
// ���� 
void minus();
// �˷� 
void multiply();
// ����
void divide();
int main()
{
	menu();
	char option=' ';
	while (1)
	{
		printf("������ѡ�\n");
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
//�˵���ʾ

void menu()
{
	printf("�����빦�ܣ�\n");
	printf("*************************\n");
	printf(" a.��           b.��\n");
	printf(" c.��           d.��\n");
	printf(" q.�˳�\n");
	printf("*************************\n");
}


// �ӷ� 
void add()
{
	double a, b;
	printf("��������������!\n");
	scanf_s("%lf %lf", &a, &b);
	printf("%.3f+%.3f=%.3f\n", a, b, a + b);
}
// ���� 
void minus()
{
	double a, b;
	printf("��������������!\n");
	scanf_s("%lf %lf", &a, &b);
	printf("%.3f-%.3f=%.3f\n", a, b, a - b);
}
// �˷� 
void multiply()
{
	double a, b;
	printf("��������������!\n");
	scanf_s("%lf %lf", &a, &b);
	printf("%.3f*%.3f=%.3f\n", a, b, a * b);
}
// ����
void divide()
{
	double a, b=0;
	while (b == 0)
	{
		printf("��������������!\n");
		scanf_s("%lf %lf", &a, &b);
	}
	printf("%.3f/%.3f=%.3f\n", a, b, a / b);
}