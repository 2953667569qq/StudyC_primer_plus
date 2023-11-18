#include<stdio.h>

int  main()
{
	char spell[26];
	for (int i = 0; i < 26; i++)
	{
		spell[i] = 97 + i;
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%c ", spell[i]);
	}
	return 0;
}