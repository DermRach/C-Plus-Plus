#include<iostream>
#include<string>
#include<Windows.h>

// Envio de informações através do console usando o cin para string simples.

int main()
{
	std::string input;
	std::cout << "Digite alguma coisa.\n";
	std::cin >> input;

	std::cout << input << "\n";
	return 0;
}
