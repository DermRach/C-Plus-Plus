#include<iostream>
#include<Windows.h>
#include<iomanip>

// Calcular o raio de uma circunferência
// Raio = Comprimento / 2 * PI
// Uso do Struct e o setprecision para controlar o tamanho das casas decimais

struct ConstantsMath
{
	const long double PI = 3.14159265358979323846;
};

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	struct ConstantsMath constants;
	std::string unit = "cm";
	long double circumference = 0.0, radius = 0.0; // C - Comprimento, R = Raio

	std::cout << "Digite o comprimento da circunferência: ";
	std::cin >> circumference;

	std::cout << "Digite a unidade de medição: ";
	std::cin >> unit;

	if (circumference < 0.0)
	{
		circumference = 1.0;
	}

	radius = circumference / (2 * constants.PI);

	std::cout << "O raio da circunferência é: "
			  << std::fixed
			  << std::setprecision(3)
			  << radius << " " << unit << "\n";

	return 0;
}
