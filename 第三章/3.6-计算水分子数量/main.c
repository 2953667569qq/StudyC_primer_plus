#include<stdio.h>

int main()
{
	double e=0;//������
	double x = 1 / 3.0e-23;//1��ˮ�ķ�����
	printf("�����������(1����Ϊ950��)");
	scanf_s("%lf", &e);

	printf("ˮ������Ϊ��%.1f��\tˮ���Ӹ���ԼΪ%e",e*950,e*950*x);

	return 0;
}