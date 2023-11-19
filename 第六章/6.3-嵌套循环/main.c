#include<stdio.h>

int main()
{
	char a = 'F';
	int i = 0;
	for (i = 0; i < 6; i++)
	{
		for (a = 'F'; a >= 'F' - i; a--)
		{
			printf("%c", a);
		}
		printf("\n");
	}

	return 0;
}