#include<stdio.h>

int main()
{
	printf("请输入一串字符，用“#”代表截至");
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
	printf("\n替换了%d次\n", sum);

	return 0;
}