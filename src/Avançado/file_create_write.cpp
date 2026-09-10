#include<iostream>
#include<fstream>

// Criar arquivo e escrever chamado exemplo.txt

int main()
{
	std::ofstream FILE("exemplo.txt"); // Pasta local onde está o .cpp
	if (FILE)
	{
		std::cout << "Arquivo criado com sucesso.\n";
		FILE << "Registro de arquivo criado usando um programa C++" << "\n";
	}
	else
	{
		std::cout << "Não foi possível criar o arquivo.\n";
	}

	return 0;
}
