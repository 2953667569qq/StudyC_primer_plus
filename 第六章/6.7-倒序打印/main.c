#include<stdio.h>
#include<string.h>

int main()
{
	char words[100];
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®£º\n");
	scanf_s("%99s", words,sizeof(words));
	int value = (strlen(words)-1);
	for (; value >=0; value--)
	{
		printf("%c", words[value]);
	}
	return 0;
}