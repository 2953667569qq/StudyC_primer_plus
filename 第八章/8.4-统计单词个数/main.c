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
	printf("单词：%d，字母：%d\n", words, nums);
	printf("平均每个单词有%.3f个字母\n", ratio);
	return 0;
}