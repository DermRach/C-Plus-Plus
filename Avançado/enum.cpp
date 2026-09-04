#include<iostream>
#include<Windows.h>

// Cada item de um enumerador possui um valor CONSTANTE
// Começando no ZERO
// Usando if, há outro cpp com swith para comparação

enum Level
{
	LOW, // 0
	MEDIUM, // 1
	AVERAGE, // 2
	HIGH, // 3
	// ...
};

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	enum Level lv = MEDIUM; // Mude para cada constante e opte por um if adequado
	if (lv == 0)
	{
		std::cout << "Baixo.\n"; // Vai retornar ua interpretação legível
	}
	else if (lv == 1)
	{
		std::cout << "Médio.\n";
	}
	else if (lv == 2)
	{
		std::cout << "Médio Alto\n";
	}
	else if (lv == 3)
	{
		std::cout << "Alto\n";
	}
	else if (lv < 0 && lv > 3)
	{
		std::cout << "Não há niveis de mensuração válidos.\n";
	}

	std::cout << "O valor será o número da CONSTANTE:\n";
	std::cout << lv; // Vai retornar um número inteiro
	return 0;
}
