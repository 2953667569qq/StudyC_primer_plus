#include<stdio.h>

//�����Ĺ�˾�ʹ����������⣬������ƴ��ˣ����Ծ�����������

int main()
{
	double kg, g, mg;
	printf("������������g��");
	scanf_s("%lf", &g);
	kg = g / 1000.0;
	mg = g * 1000.0;
	printf("תΪkg=%.4lfkg/nתΪmg=%.4fmg\n",kg,mg);




}