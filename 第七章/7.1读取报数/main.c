#include<stdio.h>

int main()
{
	printf("������һ���ַ����á�#���������");
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
	printf("\n�ո�=%d\t����=%d\t����=%d\n",kongge,huanhang,qita);


	return 0;
}