#include<iostream>
#include<random>

// Uso da biblioteca random para gerar números aleatórios

std::mt19937 engine;

int main()
{
	int seed = 0;
	std::cin >> seed;
	engine.seed(seed);
	int x = engine();
	std::cout << x << "\n";
	return 0;
}
