#include<stdio.h>

int main()
{
	printf("�������ַ���#������\n");
	char ch;
	int n = 0;
	while ((ch = getchar()) != '#')
	{
		printf("%c==%d\t", ch, ch);
		++n;
		if (n % 8 == 0)
		{
			putchar('\n');
		}
	}

	return 0;
}