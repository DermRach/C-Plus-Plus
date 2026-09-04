#include<iostream>
#include<string>
#include<Windows.h>

// Conversão de string por input para inteiro

int main()
{
	std::string input;
	std::getline(std::cin, input);
	int xValueConversion = std::stoi(input);
	std::cout << xValueConversion << "\n";

	xValueConversion += 1;
	std::cout << xValueConversion << "\n";
	return 0;
}
