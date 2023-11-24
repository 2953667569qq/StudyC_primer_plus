#include<stdio.h>
int main()
{
	char ch = ' ';
	int num = 1;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
		++num;
		printf("-%d  ", ch);
		if (num % 10 == 0)
		{
			putchar('\n');
		}

	}
	printf("一共读取了%d个字符！\n", num);

	return 0;
}