#include<stdio.h>


#define YTOS 3.156e7 //Y��to��S��


int main()
{
	int years;
	printf("���������䣺");
	scanf("%d", &years);
	printf("��ϲ�㣬��Լ����%e��", years * YTOS);
	return 0;
}