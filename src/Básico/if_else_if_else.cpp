#include<iostream>
#include<Windows.h>

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	std::string name = "DermRach"; // Mude aqui para acessar cada condição do if

	if (name == "DermRach")
	{
		std::cout << "Ok.\n";
	}
	else if (name == "Version")
	{ 
		std::cout << "Não é DermRach, mas é Version.\n";
	}
	else
	{
		std::cout << "Não é version e nem DermRach.\n";
	}

	return 0;
}
