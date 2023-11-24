#include<stdio.h>
#include<ctype.h>

int main()
{
	char ch = ' ';
	int num = 0,big=0,small=0;
	
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
		++num;
		if (ch>='a'&&ch<='z')//小写
		{
			++small;
		}
		else if (ch <= 'Z' && ch >= 'A')//大写
		{
			++big;
		}
	}
	printf("一共读取了%d个字符！\t大写有%d个，小写有%d个\n", num,big,small);

	return 0;
}