#include<stdio.h>
#define J_L 3.785
#define M_K 1.609
int main()
{
	float mile,gallon,value,L,km,value2;//mile-Ӣ�� gallon-����
	printf("�������ʻ��Ӣ���������������ļ�������");
	scanf_s("%f%f",&mile,&gallon);
	value = gallon / mile;
	L = gallon * J_L;
	km = mile * M_K;
	value2 = L / km;
	printf("ƽ��ÿӢ������%.1f��������\n", value);
	printf("ƽ��ÿ100��������%fL����", value2 * 100.0);

	return 0;
}