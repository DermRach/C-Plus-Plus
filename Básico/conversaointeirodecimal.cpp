#include<iostream>
#include<iomanip>

// Conversão implícita e conversão orgânica

int inteirox = 3;
float decimaly = 0.0f;

int main()
{
	decimaly = inteirox; // Sem necessidade de conversão
	inteirox = (int)decimaly; // Precisa devido int não "converter" automaticamente casas decimais em inteiro

	std::cout << std::fixed << std::setprecision(1) << decimaly << "\n";
	std::cout << inteirox << "\n";
	return 0;
}
