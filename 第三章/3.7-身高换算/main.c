#include<stdio.h>

int main()
{
	double cm=0, in=0; //in��Ӣ�磬cm������
	printf("���������:(Ӣ��)");
	scanf_s("%lf",&in);
	cm = in * 2.54;
	printf("\n��������ǣ�%.2lfcm\n", cm);

	return 0;
}