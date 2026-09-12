#include<stdio.h>

int main()
{
	int flag = 1, count = 0;

	while (flag != 0)
	{
		if (count >= 10)
		{
			flag = 0;
		}

		printf("%d\n", count);
		count++;
	}

	return 0;
}
