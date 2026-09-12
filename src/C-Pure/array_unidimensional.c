#include<stdio.h>

int grades[2] = { 1,2 };

int main()
{
	printf("%d\n", grades[0]);
	grades[1] = 3;
	printf("%d", grades[1]);
	return 0;
}
