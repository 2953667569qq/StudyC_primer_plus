#include<stdio.h>

int main()
{
	printf("请输入一串字符，用“#”代表截至");
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
	printf("\n替换了%d次\n", sum);

	return 0;
}