#include<stdio.h>

int main()
{
	char a[255];
	int j = 0;
	while ((a[j] = getchar()) != '\n')
	{
		j++;
	}
	a[j] = '\0';//·ÀÖ¹ÄÚ´æÐ¹Â¶
	printf("\n");
	for (int i = strlen(a)-1; i >= 0; i--)
	{
		printf("%c", a[i]);
	}
	return 0;
}