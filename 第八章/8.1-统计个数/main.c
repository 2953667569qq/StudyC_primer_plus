#include<stdio.h>
int main()
{
	char ch=' ';
	int num=0;
	while ((ch=getchar())!=EOF)
	{
		putchar(ch);
		++num;

	}
	printf("一共读取了%d个字符！\n",num);

	return 0;
}