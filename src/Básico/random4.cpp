#include<iostream>
#include<vector>
#include<fstream>
#include<math.h>
#include<Windows.h>

// Este programa faz uso de random só que com método próprio sem usar o random header
// Uso da biblioteca math.h para os métodos pow (potência)

std::vector<int> lotery;

class Random
{
private:
	static int generatorNumber(int index)
	{
		int resultgenerator = index;
		if (index % 2 == 0)
		{
			resultgenerator = pow(resultgenerator, 2);
		}

		if (index % 3 == 0)
		{
			resultgenerator = pow(resultgenerator, 2) * -1;
		}

		return resultgenerator;
	}

public:
	static void createLotery()
	{
		std::ofstream FILElotery("lotery.txt");
		for (int i = 0; i <= 9; i++)
		{
			lotery.push_back(generatorNumber(i));
			FILElotery << lotery[i] << "\n";
		}
		FILElotery.close();
	}
};

int main()
{
	int luck = 0;
	std::string opt = "undefined";

	Random random;
	random.createLotery();

	// Adivinhe o número
	std::cout << "Try guess the number.\n\n";

	while (opt != "quit")
	{
		std::cout << "Input a number\n";
		std::cin >> luck;

		for (int j =0; j < lotery.size() ; j++)
		{
			if (lotery[j] == luck)
			{
				std::cout << "The number: " << luck << " found on lotery.\n";
				break;
			}
			else if (lotery[j] != luck)
			{
				continue;
			}
		}

		// Termina o programa / Terminated program
		std::cout << "Do you want quit?\n";
		std::cin >> opt;
	}

	return 0;

}
