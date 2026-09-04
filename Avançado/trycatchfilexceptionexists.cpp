#include<iostream>
#include<fstream>
#include <filesystem>
#include <stdexcept>

// Criar arquivo e testar se o arquivo já existe com aquele nome, e evitar de salvar repetido.
// Uso do filesystem, stdexcept, try\catch\throw e if

int main()
{
	std::string nome = "exemplo.txt";
	try {
		if (std::filesystem::exists(nome))
		{
			throw std::runtime_error("Arquivo ja existe.");
		}
		else
		{
			std::ofstream FILE(nome);
			std::cout << "O arquivo foi criado com sucesso.\n";
		}
	}
	catch (const std::exception& erro)
	{
		std::cout << erro.what();
		std::ofstream FILE("outronome.txt");
	}
	

	return 0;
}
