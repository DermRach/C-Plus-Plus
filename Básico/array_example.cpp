#include<iostream>
#include<Windows.h>
#include<typeinfo>

int numbers[5] = { 1,2,3,4,5 };

// Array\Vetor unidimensional
// Acesso a elemento por indice
// Medir tamanho

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	std::cout << "A posição " << 0 << " é " << numbers[0] << "\n";
	int size = sizeof(numbers) / sizeof(numbers[0]);

	std::cout << "Tamanho do vetor: " << size << "\n";
	std::cout << "Tipo de dado: " << typeid(numbers).name() << "\n";
	return 0;
}
