#include<stdio.h>

int main()
{
	printf("������һ���ַ����á�#���������");
	char ch;
	int sum = 0;
	
	while ((ch = getchar()) != '#')
	{
		switch((int)ch)
		{
		case(int)'!':
			ch = '.';
			++sum;
			break;
		case(int)'.':
			ch = '!';
			++sum;
			break;
		}
		putchar(ch);

	}
	printf("\n�滻��%d��\n", sum);

	return 0;
}