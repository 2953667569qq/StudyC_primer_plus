#include<stdio.h>

int main()
{
	int i,j;
	char a = 'A';
	for (i = 0; i < 5; i++)
	{
		for (j = i; j < 4; j++)
		{
			printf(" ");
		}
		for (a = 'A'; a <= i+'A'; a++)
		{
			printf("%c", a );
		}
		for (a-=1; a >'A'; a--)
		{
			printf("%c", a-1);
		}
		printf("\n");
	}

	return 0;
}