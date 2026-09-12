#include<stdio.h>

// Em C você não pensa em caractere como texto e sim número
// Quando definimos unsigned char estamos falando de inteiros positivos
// Ou seja unsigned char significa 0-255

// Se for apenas char será -127, 127
// Por este motivo você não converte caractere em inteiro

unsigned char u_c = 'd'; // Para valores binários
char c = 'd'; // Para strings, caracteres e valores textuais

int main()
{
	printf("%d\n", c);
	printf("%c", c);
	return 0;
}
