#include<stdio.h>

int main()
{
	float cm,m;
	printf("�����������ߣ�(cm)");
	scanf_s("%f", &cm);
	m = cm / 100.0;
	printf("Dabney,you are %4.3f inch tall",m);
	return 0;
}