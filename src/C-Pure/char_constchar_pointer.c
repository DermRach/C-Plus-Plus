#include<stdio.h>

const char* string = "Teste de String";
const char caractere_nc = 'c'; // não pode mudar
char caractere_mut = 'd'; // pode mudar

int main()
{
	printf("%s\n", string);
	printf("%c\n", caractere_nc);
	printf("%c\n", caractere_mut);

	caractere_mut = 'f';
	printf("%c", caractere_mut);
	return 0;
}
