#include<stdio.h>
#include<float.h>

int main()
{
	float a = 1.0 / 3.0;
	double b = 1.0 / 3.0;
	printf("6λa=%-20.6f\tb=%-20.6f\n", a, b);
	printf("6λa=%-20.12f\tb=%-20.12f\n", a, b);
	printf("6λa=%-20.16f\tb=%-20.16f\n", a, b);
	printf("FLT_DIG=%-20d\tDBL_DIG=%-20d", FLT_DIG, DBL_DIG);
	return 0;
}