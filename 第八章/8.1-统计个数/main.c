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
	printf("һ����ȡ��%d���ַ���\n",num);

	return 0;
}