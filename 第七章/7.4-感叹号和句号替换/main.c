#include<stdio.h>

int main()
{
	printf("������һ���ַ����á�#���������");
	char ch;
	int sum = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == '!')
		{
			ch = '.';
			++sum;
		}
		else if (ch == '.')
		{
			ch = '!';
			++sum;
		}
		putchar(ch);

	}
	printf("\n�滻��%d��\n", sum);

	return 0;
}