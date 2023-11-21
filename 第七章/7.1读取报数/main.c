#include<stdio.h>

int main()
{
	printf("请输入一串字符，用“#”代表截至");
	char ch;
	int kongge=0, huanhang=0, qita = 0;
	while ((ch = getchar() )!= '#')
	{
		putchar(ch);
		if (ch == ' ')
		{
			++kongge;
		}
		else if (ch == '\n')
		{
			++huanhang;
		}
		else
		{
			++qita;
		}
		
	}
	printf("\n空格=%d\t换行=%d\t其他=%d\n",kongge,huanhang,qita);


	return 0;
}