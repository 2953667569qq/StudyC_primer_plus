#include <stdio.h>
#include <ctype.h>
#include<stdbool.h>
int main()
{
	char ch;
	bool NO_OFF=1;
	int nums = 0,words=0;
	while ((ch = getchar()) !=EOF)
	{
		putchar(ch);
		if (isalpha(ch))
		{
			NO_OFF = 1;
			nums += 1;
		}
		else
		{ 
			if (NO_OFF == 1)
			{
				words += 1;
				NO_OFF = 0;
			}
		}
	}
	if (NO_OFF == 1)
	{
		words += 1;
	}
	double ratio =  (double)nums/(double)words;
	printf("���ʣ�%d����ĸ��%d\n", words, nums);
	printf("ƽ��ÿ��������%.3f����ĸ\n", ratio);
	return 0;
}