#include<iostream>
#include<Windows.h>
#include<cctype>

// Algoritmo que identifica o que é número e letra

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	std::string palavra = "BB-08";

	for (int i = 0; i < palavra.length(); i++)
	{
		if (isdigit(palavra[i]))
		{
			std::cout << "Se trata de um número.\n";
			std::cout << palavra[i] << "\n";
		}
		else if (isalpha(palavra[i]))
		{
			std::cout << "Se trata de uma letra.\n";
			std::cout << palavra[i] << "\n";
		}
	}

	return 0;
}
