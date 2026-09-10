#include<iostream>
#include<string>

// Conversão de string por input para inteiro

int main()
{
	std::string word;
	std::getline(std::cin, word);
	int convertedValue = std::stoi(word);
	std::cout << convertedValue << "\n";

	convertedValue += 1;
	std::cout << convertedValue << "\n";
	return 0;
}
