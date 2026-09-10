#include<iostream>

// Uso de caracteres para definir números ou letras na tabela ASCII usando conversão implícita
// https://www.ime.usp.br/~kellyrb/mac2166_2015/tabela_ascii.html

char xChar = 'C';
int xASCII = 65;

int main()
{
	std::cout << (int)xChar << "\n"; // Output número 67
	std::cout << (char)xASCII << "\n"; // Output letra A
	return 0;
}
