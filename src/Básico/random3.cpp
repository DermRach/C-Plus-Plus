#include<iostream>
#include<vector>
#include<fstream>
#include<random>
#include<Windows.h>

// Este programa gera valores aleatórios e salvos em arquivo (gabarito) 
// Logo depois é pedido para adivinhar os numeros
// Para sair do laço basta digitar quit

// Utiliza vector (array dinâmico), arquivo  e fluxo de entrada de dados

std::mt19937 engine;
std::vector<int> lotery;

// Cria os números de sorteio e armazena em um arquivo
// Create lotery's numbers and save on archive called lotery.txt
static void createLotery()
{
	std::ofstream FILElotery("lotery.txt");
	for (int i = 0; i <= 9; i++)
	{
		engine.seed(i);
		lotery.push_back(engine());
		FILElotery << lotery[i] << "\n";
		
	}
	FILElotery.close();
}

int main()
{
	int luck = 0;
	std::string opt = "undefined";
	createLotery();

	// Adivinhe o número
	std::cout << "Try guess the number.\n";

	while (opt != "quit")
	{
		std::cout << "Input a number\n";
		std::cin >> luck;

		for (int l : lotery)
		{
			if (luck == l)
			{
				std::cout << "The number: " << luck << " found on lotery.\n";
				break;
			}
			else
			{
				std::cout << "This number don't exist.\n";
				break;
			}
		}

		// Termina o programa / Terminated program
		std::cout << "Do you want quit?\n";
		std::cin >> opt;
	}

	system("pause"); // Only click on .exe (outside IDE) hold the screen
	return 0;

}
