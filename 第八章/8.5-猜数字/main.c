#include<stdio.h>
#include<time.h>

int main()
{
	int a = rand(time) % 100;
	int b = -1;
	while (b != a)
	{
		printf("请输入一个1-100的数字：");
		scanf_s("%d", &b);
		if (a > b)
		{
			printf("猜小了！\n");

		}
		else if (a < b)
		{
			printf("猜大了！\n");
		}

	}
	printf("你的答案：%d,实际结果：%d\n", b, a);
	return 0;
}