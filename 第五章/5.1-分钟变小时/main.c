#include<stdio.h>

int main()
{
	const  int S_H = 60;
	int s,h,t;
	printf("�������룺��С��0������ֹ����");

	scanf_s("%d", &s);
	while(0 < s)
	{
		h = s / S_H;
		t = s % S_H;
		printf("%ds=%dh%ds.\n",s, h,t);
		printf("�������룺��С��0������ֹ����");
		scanf_s("%d", &s);
	}

	return 0;
}