#include<iostream>
#include<string>
#include<Windows.h>

// Conversão de inteiro para string

int main()
{
	int xValue = 1993;
	std::string sValue = std::to_string(xValue);
	sValue += " D.C";
	std::cout << sValue << "\n";
	return 0;
}
