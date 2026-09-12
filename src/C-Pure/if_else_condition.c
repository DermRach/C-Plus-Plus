#include<stdio.h>

// Mecanismo do if condicional

int main()
{
	const char* stringa = "Greetings";
	const char* stringb = "Greetings";

	if (stringa == stringb)
	{
		printf("Is equal.\n");
	}
	else
	{
		printf("Is different.\n");
	}

	return 0;
}
