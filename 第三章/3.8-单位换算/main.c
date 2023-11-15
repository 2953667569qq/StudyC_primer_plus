#include<stdio.h>

//这个题的蛊司和大汤勺有问题，翻译估计错了，所以就用质量举例

int main()
{
	double kg, g, mg;
	printf("请输入质量（g）");
	scanf_s("%lf", &g);
	kg = g / 1000.0;
	mg = g * 1000.0;
	printf("转为kg=%.4lfkg/n转为mg=%.4fmg\n",kg,mg);




}