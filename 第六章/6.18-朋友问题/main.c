#include<stdio.h>

int main()
{
	int friend=5,week=1;
	while (friend  <= 150)
	{
		friend-= 1;
		friend *= 2;
		week++;
		printf("到第%d周时，朋友数量为%d个。\n",week,friend);
		//又忘记加printf对应的参数了

	}
	
	return 0;
}