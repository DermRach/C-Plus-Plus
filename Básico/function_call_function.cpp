#include<iostream>
#include<Windows.h>

// Uma função chamando outra função

static void callSubFunction()
{
	std::cout << "Esta função foi chamada pela showInformationGlobal" << "\n";
}

static void showInformationGlobal()
{
	callSubFunction();
}

int main()
{
	SetConsoleOutputCP(CP_UTF8); // Fornece suporte a acentos para impressão no console
	showInformationGlobal();
	return 0;
}
