#include<stdio.h>

// Você simula uma classe do C++ no C em termo visuais
// Estruturais o struct é uma classe
typedef struct
{
	const char* nameclasse;
	const char* variable1;
} class;

int main()
{
	class c;
	c.nameclasse = "Pessoa";
	c.variable1 = "12";

	printf("%s\n", c.nameclasse);
	printf("%s\n", c.variable1);

	return 0;
}
