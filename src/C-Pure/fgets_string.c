#include<stdio.h>

// Captura de informação pelo teclado o formato string

int main()
{
	char inputstring[100];
	fgets(inputstring, 100 , stdin);
	printf("%s", inputstring);

	return 0;
}
