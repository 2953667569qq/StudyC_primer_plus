#include<stdio.h>
int main()
{
	char ch = ' ';
	int num = 1;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
		++num;
		printf("-%d  ", ch);
		if (num % 10 == 0)
		{
			putchar('\n');
		}

	}
	printf("һ����ȡ��%d���ַ���\n", num);

	return 0;
}