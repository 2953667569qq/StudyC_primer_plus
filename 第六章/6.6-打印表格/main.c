#include<stdio.h>
void max(int* a, int* b);
int main()
{
	printf("«Î ‰»Î∑∂Œß£∫\n");
	int a, b;
	scanf_s("%d %d", &a, &b);
	max(&a, &b);
	for (; a <= b; a++)
	{
		printf("%d\t%d\t%d\n", a, a * a, a * a * a);
	}
	return 0;
}
void max(int* a, int* b)
{
	int c;
	if (*a > *b)
	{
		c = *a;
		*a = *b;
		*b = c;
	}
}