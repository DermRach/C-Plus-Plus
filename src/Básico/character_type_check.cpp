#include<iostream>
#include<Windows.h>
#include<cctype>

// Algoritmo que identifica o que é número e letra

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	std::string text = "BB-08";

	for (int i = 0; i < text.length(); i++)
	{
		if (isdigit(text[i]))
		{
			std::cout << "Se trata de um número.\n";
			std::cout << text[i] << "\n";
		}
		else if (isalpha(text[i]))
		{
			std::cout << "Se trata de uma letra.\n";
			std::cout << text[i] << "\n";
		}
	}

	return 0;
}
