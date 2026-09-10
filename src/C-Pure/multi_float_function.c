#include<stdio.h>

static void multi(float value_a, float value_b)
{
	float result = value_a * value_b;
	printf("%.2f", result);
}

int main()
{
	multi(4.0f, 15.0f);
	return 0;
}
