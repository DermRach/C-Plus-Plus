#include<stdio.h>

static void show()
{
	printf("Some information\n");
}

static int sum(int valuea, int valueb)
{
	return valuea + valueb;
}

static const char *synch()
{
	return "result";
}

static float add(float valuea, float valueb)
{
	return valuea + valueb;
}

static int bool()
{
	return 1; // true
}

int main()
{
	show();
	int resultsum = sum(10, 20);
	const char *string = synch();
	float resultadd = add(4.5f, 10.5f);
	int flag = bool();

	printf("Sum:%d\n", resultsum + 1);
	printf("%s\n", string);
	printf("%.2f\n", resultadd);
	if (flag)
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}
	return 0;
}
