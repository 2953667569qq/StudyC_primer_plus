#include<stdio.h>

int main()
{
	int friend=5,week=1;
	while (friend  <= 150)
	{
		friend-= 1;
		friend *= 2;
		week++;
		printf("����%d��ʱ����������Ϊ%d����\n",week,friend);
		//�����Ǽ�printf��Ӧ�Ĳ�����

	}
	
	return 0;
}