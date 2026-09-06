#include<iostream>
#include<Windows.h>
#include<Random>

// Gerador de números aleatorios - total 9

std::mt19937 engine;

int main()
{
	int seed = 0;

	while (seed < 10)
	{
		engine.seed(seed);
		std::cout << engine() << "\n";
		seed++;
	}
	return 0;
}
