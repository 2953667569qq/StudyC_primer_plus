#include<stdio.h>

int main()
{
	double a;
	printf("读取一个浮点数：");
	scanf("%lf", &a);//可以关掉sdl检查，就可以用scanf了，有的系统不支持scanf_s,可以百度二者区别

	printf("小数点形式：%lf\t指数形式：%e\t十六进制计数法：%a", a, a,a);
	return 0;
}