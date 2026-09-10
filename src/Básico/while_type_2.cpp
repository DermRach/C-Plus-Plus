#include<iostream>

// Uso do while com contador tipo 2
// Na situação count é igual a zero, se fosse no tipo 1 do while ele sairia
// Nesta situação ele vai imprimir 1 e sair

int main()
{
	int count = 0;

	do
	{
		count++;
		std::cout << count << "\n";
	} while (count <= 0);

	return 0;
}
