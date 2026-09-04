#include<iostream>
#include<Windows.h>

// Olá mundo usando acentos

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	std::cout << "Olá Mundo!" << "\n";
	return 0;
}
