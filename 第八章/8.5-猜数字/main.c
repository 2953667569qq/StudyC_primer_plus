#include<stdio.h>
#include<time.h>

int main()
{
	int a = rand(time) % 100;
	int b = -1;
	while (b != a)
	{
		printf("������һ��1-100�����֣�");
		scanf_s("%d", &b);
		if (a > b)
		{
			printf("��С�ˣ�\n");

		}
		else if (a < b)
		{
			printf("�´��ˣ�\n");
		}

	}
	printf("��Ĵ𰸣�%d,ʵ�ʽ����%d\n", b, a);
	return 0;
}