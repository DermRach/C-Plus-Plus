#include<iostream>
#include<iomanip>

// Conversão implícita e conversão orgânica

int integerx = 3;
float decimaly = 0.0f;

int main()
{
	decimaly = integerx; // Sem necessidade de conversão
	integerx = (int)decimaly; // Precisa devido int não "converter" automaticamente casas decimais em inteiro

	std::cout << std::fixed << std::setprecision(1) << decimaly << "\n";
	std::cout << integerx << "\n";
	return 0;
}
