#include<stdio.h>
void br();
void ic();
int main()
{
	printf("Brazil,Russia,India,China\n");
	printf("India,China,\n");
	printf("Brazil,Russia\n");
	br();
	ic();
	return 0;
}


void br()
{
	printf("Brazil,Russia\n");

}
void ic()
{
	printf("India,China,\n");
}