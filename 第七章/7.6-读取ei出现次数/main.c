#include<stdio.h>

int main()
{
	printf("������һ���ַ����á�#���������");
	char ch;
	int sum = 0,e=0;

	while ((ch = getchar()) != '#')
	{
		if (ch == 'e')
		{
			e =1;
			continue;
		}
		
		if (e == 1)
		{
			if (ch == 'i')
			{
				++sum;
				continue;
			}
			else
			{
				e = 0;
			}
		}
	}
	printf("ei���ִ���Ϊ%d", sum);
	return 0;
}