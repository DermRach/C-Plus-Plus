#include<stdio.h>

// Se outro valor diferente de 1 e 0, sempre será considerado true
// Exceção é que 0 será falso

int main()
{
	int flag_bool = 0; //false

	if (flag_bool)
	{
		printf("true");
	}
	else 
	{
		printf("false");
	}

	return 0;
}
