#include<iostream>
#include<typeinfo>

int x[5] = { 1,2,3,4,5 };

// Array\Vetor unidimensional
// Acesso a elemento por indice
// Medir tamanho 

int main()
{
	std::cout << "Position " << 0 << " is " << x[0] << "\n";
	int size = sizeof(x) / sizeof(x[0]);

	std::cout << "Size Array: " << size << "\n";
	std::cout << "Type: " << typeid(x).name() << "\n";
	return 0;
}
