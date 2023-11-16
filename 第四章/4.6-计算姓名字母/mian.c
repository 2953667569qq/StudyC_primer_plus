#include<stdio.h>
#include<string.h>
int main()
{
	char firstName[20], lastName[20];
	printf("ÇëÊäÈëÄãµÄĞÕÃû£º");
	scanf("%s%s", firstName, lastName);
	printf("%s\t%s\n", firstName, lastName);
	printf("%*s%d\t%*s%d\n", strlen(firstName) - 1, "", strlen(firstName), strlen(lastName) - 1, "", strlen(lastName));
	printf("%d%*s\t%d", strlen(firstName), strlen(firstName) - 1, "", strlen(lastName));
	return 0;
}