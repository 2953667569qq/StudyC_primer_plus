#include<stdio.h>

int main()
{
	int on = 0, jn = 0;
	int s;
	double oushu = 0, jishu = 0;
	printf("���������֣�0�����������");
	scanf_s("%d", &s);
	while (s != 0)
	{
		
		if (s%2==0)
		{
			++on;
			oushu += (double)s;
		}
		else
		{
			++jn;
			jishu += (double)s;
		}
		scanf_s("%d", &s);
	} 
	printf("ż���ĸ���=%d\tż��ƽ��ֵ=%.3f\n", on, oushu/on);
	printf("�����ĸ���=%d\t������ƽ��ֵ=%.3f\n", jn, jishu/jn);

	return 0;
}