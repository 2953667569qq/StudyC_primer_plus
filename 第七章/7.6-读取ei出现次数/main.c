#include<stdio.h>

int main()
{
	printf("请输入一串字符，用“#”代表截至");
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
	printf("ei出现次数为%d", sum);
	return 0;
}