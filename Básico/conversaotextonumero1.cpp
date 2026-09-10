#include<iostream>
#include<string>

// Conversão de inteiro para string

int main()
{
	int valorx = 1993;
	std::string valors = std::to_string(valorx);
	valors += " D.C";
	std::cout << valors << "\n";
	return 0;
}
