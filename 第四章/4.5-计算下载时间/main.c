#include<stdio.h>

int main()
{
	float Mb, MB,time;
	printf("�����������ٶȣ�Mb/s�����ļ���С��MB����");
	scanf_s("%f %f", &Mb, &MB);
	time = MB / Mb;
	printf("�����ٶ�Ϊ��%.2fMb/s,�ļ���СΪ%.2fMB,Ԥ������ʱ��Ϊ%.2fs",Mb,MB,time);
	return 0;
}