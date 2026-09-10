#include<iostream>
#include<string>
#include<Windows.h>

// Envio de informações através do console usando o getline e o cin para string compostas

int main()
{
	std::string input;
	std::cout << "Digite uma frase.\n";
	std::getline(std::cin, input);
	std::cout << input << "\n";
	input.c_str(); // limpeza do buffer, para uso contínuo da variável

	std::getline(std::cin, input);
	std::cout << input << "\n";
	return 0;
}
