#include<iostream>

// Variável global atendendo a um método sem retorno e o programa principal

std::string name = "C++ Application";

static void showInformationGlobal()
{
	std::cout << name << "\n";
}

int main()
{
	showInformationGlobal();
	name = "Change C++ Application";
	std::cout << name << "\n";
	return 0;
}
