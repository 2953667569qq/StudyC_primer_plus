#include<stdio.h>

int main()
{
	char a = 'A';
	int i,n=0;
	for (i = 0; i <= 5; i++)
	{
		for (a='A'+n;a<=i+n+'A';a++)
		{
			printf("%c", a);
		}
		n+=i+1;
		printf("\n");
	}

	return 0;
}