#include<stdio.h>
#define J_L 3.785
#define M_K 1.609
int main()
{
	float mile,gallon,value,L,km,value2;//mile-英里 gallon-加仑
	printf("请输入驾驶的英里数和消耗油量的加仑数：");
	scanf_s("%f%f",&mile,&gallon);
	value = gallon / mile;
	L = gallon * J_L;
	km = mile * M_K;
	value2 = L / km;
	printf("平均每英里消耗%.1f加仑汽油\n", value);
	printf("平均每100公里消耗%fL汽油", value2 * 100.0);

	return 0;
}