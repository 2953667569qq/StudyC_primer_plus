#include<stdio.h>
#include<ctype.h>

int main()
{
	char ch = ' ';
	int num = 0,big=0,small=0;
	
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
		++num;
		if (ch>='a'&&ch<='z')//Сд
		{
			++small;
		}
		else if (ch <= 'Z' && ch >= 'A')//��д
		{
			++big;
		}
	}
	printf("һ����ȡ��%d���ַ���\t��д��%d����Сд��%d��\n", num,big,small);

	return 0;
}