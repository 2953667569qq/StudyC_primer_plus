#include<stdio.h>


#define YTOS 3.156e7 //Y年to到S秒


int main()
{
	int years;
	printf("请输入年龄：");
	scanf("%d", &years);
	printf("恭喜你，大约活了%e秒", years * YTOS);
	return 0;
}