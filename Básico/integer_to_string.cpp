#include<iostream>
#include<string>

// Conversão de inteiro para string

int main()
{
	int valuex = 1993;
	std::string values = std::to_string(valuex);
	values += " D.C";
	std::cout << values << "\n";
	return 0;
}
