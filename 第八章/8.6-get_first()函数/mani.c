#include<stdio.h>

char get_first();
int main()
{

	char ch=get_first();
	printf("ch=%c", ch);

	return 0;
}
char get_first()
{
	char ch='\n';
	while (ch == '\n' || ch == ' '||ch=='\t')
	{
		ch = getchar();
	}
	return ch;
}