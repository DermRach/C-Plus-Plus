#include<iostream>
#include<Windows.h>

// Gerador aleatorio de palavras
// Configuração de três regras por vez

int main()
{
	int ASCII[18] = { 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 80, 81, 82, 83};
	int rule = -1; // Nenhuma regra
	std::string result = "";

	std::cout << "[0] Gerador Par, [1] Gerador Impar, [2] Gerador divisel por 5 \n:";
	std::cin >> rule;

	if (rule < 0 || rule > 2)
	{
		exit(1); // Termina o programa
	}
	switch (rule)
	{
	case 0:
		for (int i = 0; i <= 17; i++)
		{
			if (i % 2 == 0)
			{
				std::cout << (char)ASCII[i];
				result += (char)ASCII[i];
			}
		}
		break;
	case 1:
		for (int i = 0; i <= 17; i++)
		{
			if (i % 2 != 0)
			{
				std::cout << (char)ASCII[i];
				result += (char)ASCII[i];
			}
		}
		break;
	case 2:
		for (int i = 0; i <= 17; i++)
		{
			if (i % 5 == 0)
			{
				std::cout << (char)ASCII[i];
				result += (char)ASCII[i];
			}
		}
		break;
	}
	std::cout << "A palavra gerada: " << result << "\n";
	std::cout << "Regra escolhida: " << rule << "\n";

	return 0;
}
