#include<iostream>
#include<iomanip>

// Conversão implícita e conversão orgânica

int xInt = 3;
float xFloat = 0.0f;

int main()
{
	xFloat = xInt; // Sem necessidade de conversão
	xInt = (int)xFloat; // Precisa devido int não "converter" automaticamente casas decimais em inteiro

	std::cout << std::fixed << std::setprecision(1) << xFloat << "\n";
	std::cout << xInt << "\n";
	return 0;
}
