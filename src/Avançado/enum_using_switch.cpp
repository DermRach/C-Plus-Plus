#include<iostream>
#include<Windows.h>

// Cada item de um enumerador possui um valor CONSTANTE
// Começando no ZERO
// Usando if, há outro cpp com if para comparação

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
	switch (lv)
	{
	case 0:
		std::cout << "Baixo.\n"; // Vai retornar ua interpretação legível
		break;
	case 1:
		std::cout << "Médio.\n";
		break;
	case 2:
		std::cout << "Médio Alto\n";
		break;
	case 3:
		std::cout << "Alto\n";
	default:
		std::cout << "Não há niveis de mensuração válidos.\n";
	}
	
	std::cout << "O valor será o número da CONSTANTE:\n";
	std::cout << lv; // Vai retornar um número inteiro
	return 0;
}
