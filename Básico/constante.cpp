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
	struct ConstantsMath cm;
	std::string unidade = "cm";
	long double C = 0.0, R = 0.0; // C - Comprimento, R = Raio
	std::cout << "Digite o comprimento da circunferência: ";
	std::cin >> C;
	std::cout << "Digite a unidade de medição: ";
	std::cin >> unidade;

	if (C < 0.0)
	{
		C = 1.0;
	}

	R = C / (2 * cm.PI);
	std::cout << "O raio da circunferência é: " << std::fixed << std::setprecision(3) <<  R << " " << unidade << "\n";

	return 0;
}
